#include<iostream>
using namespace std;
int main()
{
	int p,r,t,si;

	cout<<"Name: Neev Lila"<<endl;
	cout<<"Enrollment no.220130318021"<<endl;

	cout<<"Enter principle amount ::";
	cin>>p;

	cout<<"Enter rate of interest ::";
	cin>>r;

	cout<<"Enter time period      ::";
	cin>>t;

	si=(p*r*t)/100;
	cout<<"simple interest amount ::"<<si;

    return 0;
}
