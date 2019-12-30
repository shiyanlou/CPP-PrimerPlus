#include <iostream>
#include <algorithm>
int reduce(long ar[], int n);
void show(const long ar[], int n);
int main()
{
    using namespace std;
    const int N = 10;
    long ar[N] = {12, 12, 5, 6, 11, 5, 6, 77, 11, 12};
    show(ar, N);
    int newlen = reduce(ar, N);
    show(ar, newlen);
    return 0;
}

int reduce(long ar[], int n)
{
    using namespace std;
    sort(ar, ar + n);
    long * past_end;
    past_end = unique(ar, ar + n);
    return past_end - ar;
}

void show(const long ar[], int n)
{
    for (int i = 0; i < n; i++)
        std::cout << ar[i] << ' ';
    std::cout << '\n';
}