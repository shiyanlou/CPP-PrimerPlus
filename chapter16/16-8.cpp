#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <iterator>
void display(const std::string & name) { std::cout << name << std::endl;}
int main()
{
    using namespace std;
    set<string> mat;
    cout << "Mat, please enter the list of your friends' names.\n";
    cout << "Empty line to terminate.\n";
    string name;
    getline(cin, name);
    while (name.size() > 0)
    {
        mat.insert(name);
        getline(cin, name);
    }
    set<string> pat;
    cout << "Pat, please enter the list of your friends' names.\n";
    cout << "Empty line to terminate.\n";
    getline(cin, name);
    while (name.size() > 0)
    {
        pat.insert(name);
        getline(cin, name);
    }

    set<string> total;
    set_union(mat.begin(), mat.end(), pat.begin(), pat.end(),
            insert_iterator<set<string> >(total, total.begin()));

    cout << "The friends of Mat:\n";
    for_each(mat.begin(), mat.end(), display);
    cout << endl << "The friends of Pat:\n";
    for_each(pat.begin(), pat.end(), display);
    cout << endl << "Their friends:\n";
    for_each(total.begin(), total.end(), display);

    return 0;
}