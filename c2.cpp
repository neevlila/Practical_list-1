#include<iostream>
using namespace std;
class temp
{
	private:
		float fahern , celsius;
	public:
	float conversion(float f)
	{
		fahern = f;
		celsius = (fahern-32)*5/9;
		return celsius;
	 } 
};
int main()
{
	temp t;
	float f;
	cout<<"Enter the Teamprature in fahernhit : ";
	cin>>f;
	cout<<"Temprature in celsius = "<<t.conversion(f);

	cout << "220130318021";
	
	return 0;
}
