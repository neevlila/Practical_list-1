#include<iostream>
using namespace std;
main()
{
	int p,r,t,ci;

	cout<<"Name: Neev Lila"<<endl;
	cout<<"Enrollment no.220130318021"<<endl;

	
	cout<<"Enter the amount : ";
	cin>>p;
	cout<<"Enter the Rate   : ";
	cin>>r;
	cout<<"Enter the time   : ";
	cin>>t;
	
	
	ci = p*((1+r/100)^t);
	cout<<"Compund Interest : "<<ci;
	
	return 0;
}
