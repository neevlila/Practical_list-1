#include<iostream>
using namespace std;
int fact(int );

int main()
{

	cout<<"Name: Neev Lila"<<endl;
	cout<<"Enrollment no.220130318021"<<endl;
	
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	
	fact(n);
	
	return 0;
}
int fact(int n)
{
	int i,f=1;
	if(n<0)
	{
		cout<<"factorial of this number doesn't exisits ";
	}
	for(i=1;i<=n;i++)
	{
		f = f*i;
	}
		cout<<"This is factorial of a given number : "<<f;
}
