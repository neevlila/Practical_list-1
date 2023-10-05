#include <stdio.h>
using namespace std;
int main()
{

	cout<<"Name: Neev Lila"<<endl;
	cout<<"Enrollment no.220130318021"<<endl;
	
    	char c;
    	int lowercase_vowel, uppercase_vowel;
    
	cout<<"Enter an alphabet :: ";
    	cin>>c;

    	lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    	uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    	if (lowercase_vowel || uppercase_vowel)
	{
		cout<<"this alphabet is vowel"<<c;
	}
	else
	{
        	cout<<"this alphabet is consonant"<<c;
	}
	return 0;
}

