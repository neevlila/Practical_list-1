#include<iostream>
using namespace std;
int main()
{
	int no1,no2,no3;

	cout<<"220130318021";

	cout<<"Enter the 1 number::";
	cin>>no1;
	cout<<"Enter the 2 number::";
	cin>>no2;
	cout<<"Enter the 3 number::";
	cin>>no3;

	if(no1>no2)
	{
		cout<<"This number is 1 maximum"<<endl;
	}
	else
		if(no2>no3)
		{
			cout<<"This number is 2 maximum"<<endl;
		}
		if(no3>no1)
		{
			cout<<"This number is 3 maximum"<<endl;
		}
	return 0;
}
