#include <iostream>
#include <vector>
#include <cstdlib>
#include <list>
#include <algorithm>
#include <ctime>
const unsigned long NUM = 1000000UL;
int main()
{
    using namespace std;

    // a
    cout << "Initializing a large vector..." << flush;
    srand(time(0));
    vector<int> vi0(NUM);
    for (unsigned long i = 0UL; i < NUM; i++)
        vi0.at(i) = rand();
    cout << "done.\n";
    
    // b
    cout << "Initializing another vector and a list..." << flush;
    vector<int> vi(vi0);    // use a copy constructor
    list<int> li(vi0.begin(), vi0.end());
    cout << "done.\n";

    // c
    cout << "Sorting a vector, please wait..." << flush;
    clock_t start = clock();
    sort(vi.begin(), vi.end());
    clock_t end = clock();
    cout << "done.\n";
    cout << "Time: " << (double)(end - start)/CLOCKS_PER_SEC << " s.\n";

    cout << "Sorting a list, please wait..." << flush;
    start = clock();
    li.sort();
    end = clock();
    cout << "done.\n";
    cout << "Time: " << (double)(end - start)/CLOCKS_PER_SEC << " s.\n";

    // d
    cout << "Reset the list..." << flush;
    copy(vi0.begin(), vi0.end(), li.begin());
    cout << "done.\n";
    cout << "Copying, sorting, and copying back, please wait..." << flush;
    start = clock();
    copy(li.begin(), li.end(), vi.begin());
    sort(vi.begin(), vi.end());
    copy(vi.begin(), vi.end(), li.begin());
    end = clock();
    cout << "done.\n";
    cout << "Time: " << (double)(end - start)/CLOCKS_PER_SEC << " s.\n";

    return 0;
}