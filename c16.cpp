#include<iostream>
using namespace std;
int arm(int );
int main()
{
	cout<<"Name: Neev Lila"<<endl;
	cout<<"Enrollment no.220130318021";
	
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	
	arm(n);
	return 0;
}
int arm(int n)
{
	int sum=0,r,i;
	i = n;
	while(i!=0)
	{
		r = i%10;
		sum = sum+(r*r*r);
		i = i/10;
	}
	if(n == sum)
	{
		cout<<"This is Armstrong number  ";
	}
	else
	{
		cout<<"This is not Armstrong number ";
	}
}
