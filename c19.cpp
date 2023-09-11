#include<iostream>
using namespace std;
int main()
{

	cout << "220130318021";
	
	int a,b,opr;
	cin>>a;
	cout<<"Enter the b : "<<endl;
	cin>>b;
	cout<<"1 Add"<<endl;
	cout<<"2 Sub"<<endl;
	cout<<"3 Mul"<<endl;
	cout<<"4 Div"<<endl;
	cout<<"5 Mod"<<endl;
	cout<<"Enter the opreator : ";
	cin>>opr;
	
	switch(opr)
	{
		case 1:
			cout<<"a + b : "<<a+b;
		break;
		case 2:
			cout<<"a - b : "<<a-b;
		break;
		case 3:
			cout<<"a * b : "<<a*b;
		break;
		case 4:
			cout<<"a / b : "<<a/b;
		break;
		case 5:
			cout<<"a % b : "<<a%b;
		break;
		default:
			cout<<"Sorry";
	}
}
