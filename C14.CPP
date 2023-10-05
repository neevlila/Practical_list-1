#include<iostream>
using namespace std;
int main()
{
	int n,num,digit,rev=0;

	cout<<"Name: Neev Lila"<<endl;
	cout<<"Enrollment no.220130318021"<<endl

	cout<<"Enter a positive number ::";
	cin>>num;

	do
	{
		digit = num%10;
		rev =(rev*10/digit);
		num =num/10;
	}

	while(num!=0);
        {
	        cout<<"the reverse of the number is ::"<<rev<<endl;
        }
	if(n==rev)
	{
		cout<<"The number is a palindrome ::";
	}
	else
	{
		cout<<"The number is a not palindrome ";
	}
	return 0;
}
