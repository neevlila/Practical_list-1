#include<iostream>
using namespace std;
int main()
{

	cout<<"Name: Neev Lila"<<endl;
	cout<<"Enrollment no.220130318021";
	
	int n,sum=0;
	
	cout << "Enter the natural number ::";
	cin >> n;
	
	while(n > 0)
	{
		sum += n;
		n--;
	}
	cout << "Sum of the natural number ::" << sum << endl;
	
	return 0;
}
