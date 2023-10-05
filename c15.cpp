#include<iostream>
using namespace std;
int prime(int );
int main()
{

	cout<<"Name: Neev Lila"<<endl;
	cout<<"Enrollment no.220130318021";
	
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	prime(n);
	return 0;
}
int prime(int n)
{
	int flag=0;
	for(int i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			flag = 1;
			break;
		}
	}
	if(flag == 0)
	{
		cout<<"This is prime number : ";
	}
	else
	{
		cout<<"This not prime number : ";
	}
}
