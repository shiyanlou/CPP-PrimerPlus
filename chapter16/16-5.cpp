#include <iostream>
#include <string>
#include <algorithm>
const int N = 10;
template <class T>
int reduce(T ar[], int n);
int main()
{
    using namespace std;
    long lar[N] = {12, 12, 5, 6, 11, 5, 6, 77, 11, 12};
    string sar[N] = {"a", "good", "cook", "could", "cook",
                     "a", "lot", "of", "good", "cookies"};
    cout << "Original:\n";
    for (int i = 0; i < N; i++)
        cout << lar[i] << ' ';
    cout << endl;
    for (int i = 0; i < N; i++)
        cout << sar[i] << ' ';
    cout << endl;

    cout << "After reducing:\n";
    int lar_len = reduce(lar, N);
    int sar_len = reduce(sar, N);
    for (int i = 0; i < lar_len; i++)
        cout << lar[i] << ' ';
    cout << endl;
    for (int i = 0; i < sar_len; i++)
        cout << sar[i] << ' ';
    cout << endl;

    return 0;
}

template <class T>
int reduce(T ar[], int n)
{
    using namespace std;
    sort(ar, ar+n);
    T * past_end = unique(ar, ar+n);
    return past_end - ar;
}