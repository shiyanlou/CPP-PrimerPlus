// 12_6.cpp
#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
#include "queue.h"
const int MIN_PER_HR = 60;

bool newcustomer(double x); // is there a new customer?

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::ios_base;
	// setting things up
	std::srand(std::time(0));    //  random initializing of rand()

	cout << "Case Study: Bank of Heather Automatic Teller\n";
	cout << "Enter maximum size of queue: ";
	int qs;
	cin >> qs;
	Queue line1(qs);         // line1 queue holds up to qs people
	Queue line2(qs);         // line2 queue holds up to qs people

	cout << "Enter the number of simulation hours: ";
	int hours;              //  hours of simulation
	cin >> hours;
	// simulation will run 1 cycle per minute
	long cyclelimit = MIN_PER_HR * hours; // # of cycles

	cout << "Enter the average number of customers per hour: ";
	double perhour;         //  average # of arrival per hour
	cin >> perhour;
	double min_per_cust;    //  average time between arrivals
	min_per_cust = MIN_PER_HR / perhour;

	Item temp;              //  new customer data
	long turnaways = 0;     //  turned away by full queue
	long customers = 0;     //  joined the queue
	long served = 0;        //  served during the simulation
	long sum_line1 = 0;      //  cumulative line1 length
	long sum_line2 = 0;      //  cumulative line2 length
	int wait_time1 = 0;      //  time until autoteller is free
	int wait_time2 = 0;      //  time until autoteller is free
	long line1_wait = 0;     //  cumulative time in line1
	long line2_wait = 0;     //  cumulative time in line2

	// running the simulation
	for (int cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (newcustomer(min_per_cust))  // have newcomer
		{
			int choice = 0;
			if (line1.queuecount() == line2.queuecount())
			{
				choice = std::rand() % 2 + 1; // 如果队列的人数相同，则随机分配到一个队列中
			}
			else if (line1.queuecount() < line2.queuecount())
			{
				choice = 1;
			}
			else
			{
				choice = 2;
			}
			switch (choice)
			{
			case 1:
				if (line1.isfull())
					turnaways++;
				else
				{
					customers++;
					temp.set(cycle);    // cycle = time of arrival
					line1.enqueue(temp); // add newcomer to line1
				}
				break;
			
			case 2:
				if (line2.isfull())
					turnaways++;
				else
				{
					customers++;
					temp.set(cycle);    // cycle = time of arrival
					line2.enqueue(temp); // add newcomer to line1
					sum_line2 += 1;
				}
				break;
			}
		}
		if (wait_time1 <= 0 && !line1.isempty())
		{
			line1.dequeue(temp);      // attend next customer
			wait_time1 = temp.ptime(); // for wait_time minutes
			line1_wait += cycle - temp.when();
			served++;
		}

		if (wait_time2 <= 0 && !line2.isempty())
		{
			line2.dequeue(temp);      // attend next customer
			wait_time2 = temp.ptime(); // for wait_time minutes
			line2_wait += cycle - temp.when();
			served++;
		}

		if (wait_time1 > 0)
			wait_time1--;

		if (wait_time2 > 0)
			wait_time2--;

		sum_line1 += line1.queuecount();
		sum_line2 += line2.queuecount();
	}

	// reporting results
	if (customers > 0)
	{
		cout << "customers accepted: " << customers << endl;
		cout << "  customers served: " << served << endl;
		cout << "         turnaways: " << turnaways << endl;
		cout << "average queue1 size: ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout << (double)sum_line1 / cyclelimit << endl;
		cout << " average wait time1: "
			<< (double)line1_wait / served << " minutes\n";
		cout << "average queue2 size: ";
		cout << (double)sum_line2 / cyclelimit << endl;
		cout << " average wait time2: "
			<< (double)line2_wait / served << " minutes\n";
	}
	else
		cout << "No customers!\n";
	cout << "Done!\n";
	// cin.get();
	// cin.get();
	return 0;
}

//  x = average time, in minutes, between customers
//  return value is true if customer shows up this minute
bool newcustomer(double x)
{
	return (std::rand() * x / RAND_MAX < 1);
}
