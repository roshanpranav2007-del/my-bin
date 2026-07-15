#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter two numbers :";
	cin>>a>>b;
	cout<<"Choose the operation :"<<endl;
        cout<<"(1)Addition \n (2)Subtraction\n (3)Multiplication\n (4)division\n : "<<endl;
        cin>>c;
	switch(c)
	{
		case 1:
			cout<<"\nAfter adding :"<<a+b;
			break;
		case 2:
			cout <<"\nAfter Subtraction :"<<a-b;
			break;
		case 3:
			cout<<"\nAFter Multiplication:"<<a*b;
			break;
		case 4:
			cout<<"\nAfter Deivision:"<<a/b;
			break;
		default:
			cout<<"\nEnter a valid operation!try again!";
			break;
	}	
	return 0;
}
