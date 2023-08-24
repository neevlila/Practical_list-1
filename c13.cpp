#include<iostream>
using namespace std;
int main()
{
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
