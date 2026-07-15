#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter two numbers :";
	cin>>a>>b;
	cout<<"Choose the operation :"<<endl;
        cout<<"(1)Addition \n (2)Subtraction : "<<endl;
        cin>>c;
	switch(c)
	{
		case 1:
			cout<<"\nAfter adding :"<<a+b;
			break;
		case 2:
			cout <<"\nAfter Subtraction :"<<a-b;
			break;
		default:
			cout<<"\nEnter a valid operation!try again!";
			break;
	}	
	return 0;
}
