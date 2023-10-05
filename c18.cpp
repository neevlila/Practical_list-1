#include<iostream>
using namespace std;
int power(int , int );
int main()
{

	cout<<"Name: Neev Lila"<<endl;
	cout<<"Enrollment no.220130318021"<<endl;
	
	int b,p;
	cout<<"Enter the base : ";
	cin>>b;
	cout<<"Enter the power : ";
	cin>>p;
	
	power(b,p);
	return 0;
}
int power(int b,int p)
{
	int i,res=1;
	for(i=1;i<=p;i++)
	{
		res*=b;
	}
	cout<<res;
}
