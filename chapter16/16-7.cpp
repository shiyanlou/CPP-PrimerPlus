#include <iostream>
#include <vector>
#include <cstdlib>      // for srand()
#include <ctime>
#include <algorithm>
using namespace std;
vector<int> Lotto(int spots, int selected);
int main()
{
    int spots, selected;
    cout << "How many numbers do you need to draw? ";
    cin >> spots;
    cout << "What is the number you can draw? ";
    cin >> selected;
    vector<int> winners;
    winners = Lotto(spots, selected);
    cout << "The Winners: ";
    for (int i = 0; i < winners.size(); i++)
        cout << winners[i] << ' ';
    cout << endl;
    return 0;
}

vector<int> Lotto(int spots, int selected)
{
    vector<int> pool(spots);
    for (int i = 0; i < spots; i++)
        pool[i] = i + 1;
    srand(time(0));
    random_shuffle(pool.begin(), pool.end());
    vector<int> winners(pool.begin(), pool.begin() + selected);
    sort(winners.begin(), winners.end());
    return winners;
}