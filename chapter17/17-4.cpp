#include <fstream>
#include <iostream>
#include <cstdlib>
#include <string>

int main()
{
    using namespace std;

    ifstream fa("a.txt", ios_base::in);
    ifstream fb("b.txt", ios_base::in);
    if (!(fa && fb))
    {
        cerr << "Failed to open a.txt or b.txt" << endl;
        exit(EXIT_FAILURE);
    }

    ofstream fout("out.txt", ios_base::out);
    if (!fout)
    {
        cerr << "Failed to open out.txt" << endl;
        exit(EXIT_FAILURE);
    }

    string word1,word2;
    while (true)
    {
        int temp = 0;
        if (getline(fa,word1))
            temp += 1;
        if (getline(fb,word2))
            temp += 2;
        if (temp == 0)
            break;
        fout << word1 << " "<<word2<<endl;
        word1.clear();
        word2.clear();
    }




    cout << "Copied content in a.txt and b.txt to out.txt" << endl;

    fa.close();
    fb.close();
    fout.close();

    return 0;
}