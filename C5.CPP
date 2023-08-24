#include<iostream.h>
#include<conio.h>
int main()
{
	int a,b,temp;
	clrscr();

	cout<<"Enter the number one ::";
	cin>>a;
	cout<<"Enter the number two ::";
	cin>>b;

	temp=a;
	a=b;
	b=temp;

	cout<<a<<endl;
	cout<<b<<endl;

	getch();
}