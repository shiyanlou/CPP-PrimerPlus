//14-3.cpp
#include"queuetp.h"
const int Size=5;
int main()
{
	QueueTp<Worker*>lolas(Size);
	Worker*temp;
	int ct;
	for(ct=0;ct<Size;ct++)
	{
		char ch;
		cout<<"Enter the command: \n"
		<<"A or a enter queue,"
		<<"P or p delete queue,"
		<<"Q or q quit.\n";
		cin>>ch;
		while(strchr("apq",ch)==NULL)
		{
			cout<<"Please enter a p or q: ";
			cin>>ch;
		}
		if(ch=='q')
		break;
		switch(ch)
		{
			case 'a': 
                temp=new Worker;
                cin.get();
                temp->Set();
                if(lolas.isfull())
                cout<<"Queue already full\n";
                else 
                lolas.enqueue(temp);
                break;
			case 'p': 
                if(lolas.isempty())
                cout<<"Queue already empty\n";
                else 
                lolas.dequeue(temp);
                break;
		}
	}
	cout<<"\nHere the total count: ";
	cout<<lolas.queuecount();
	cout<<"Done.\n";
	return 0;
}