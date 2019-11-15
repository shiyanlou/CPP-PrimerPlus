#include<iostream>
#include<cctype>
#include<cstring>
int main()
{
	using namespace std;
	int vowel=0,consonant=0,other=0;
	char word[15];
	bool stop = false;
	cout<<"Enter words(q to quit):\n";
	while(stop!=true&&cin>>word)
	{
        tolower(word[0]);
		if(isalpha(word[0]))
		{
			switch(word[0])
			{
			case 'a':
			case 'i':
			case 'u':
			case 'e':
			case 'o':
				++vowel;
				break;

			case 'q':
				if(strlen(word)==1)
				{
					stop = true;
					break;
				}

			default:
				++consonant;

			}

		}
		else
			++other;
	}
	cout<<vowel<<" words beginning with vowels\n";
	cout<<consonant<<" words beginning with consonants\n";
	cout<<other<<" others\n";
	return 0;
}