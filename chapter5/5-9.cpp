#include<iostream>
#include<string>
int main()
{
    using namespace std;
    string word;
    int sum=0;
    cout<<"Enter words(to stop,type the word done):\n";
    cin>>word;
    while(word!="done")
    {
        sum++;
        cin>>word;
    }
    cout<<"You entered a total of "<<sum<<" words.\n";
    return 0;
}