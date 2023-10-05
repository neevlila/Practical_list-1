#include<iostream>
int main()
{
	int a,b,temp;

	cout<<"Name: Neev Lila"<<endl;
	cout<<"220130318021"<<endl;

	cout<<"Enter the number one ::";
	cin>>a;
	cout<<"Enter the number two ::";
	cin>>b;

	temp=a;
	a=b;
	b=temp;

	cout<<a<<endl;
	cout<<b<<endl;

	return 0;
}
