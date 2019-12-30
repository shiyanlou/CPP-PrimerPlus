#include <iostream>
#include <initializer_list>
template <typename T>
T average_list(const std::initializer_list<T> & il)
{
    T tot = 0;
    for (auto i = il.begin(); i != il.end(); i++)
        tot += *i;
    return tot / il.size();
}

int main()
{
    using namespace std;
    auto q = average_list({15.4, 10.7, 9.0});
    cout << q << endl;
    cout << average_list({20, 30, 19, 17, 45, 38}) << endl;
    auto ad = average_list<double>({'A', 70, 65.33});
    cout << ad << endl;
    return 0;
}