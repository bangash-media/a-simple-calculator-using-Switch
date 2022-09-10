#include <iostream>

using namespace std;
/*Program Make a simple calculator. The program should ask the user to input two operands and an
operation type*/
int main() 
{
	double num1,num2;
	char operation;
	cout<<"\n\n\t\t\t\t\"CALCULATOR\""<<endl<<endl<<endl;
	cout<<"********************************************************";
	cout<<"\n\n\n\t\tEnter First Number: "; cin>>num1; //first input from user
	cout<<"\n\n\t\tEnter Second Number: "; cin>>num2;  //second input from user
	cout<<"\n\n\t\tEnter The Required Operation(+,-,*,/)"; cin>>operation; //four operation applied
	cout<<endl<<endl<<"********************************************************";
	switch (operation)
	{
		case '+':  //if the operator is + then it will run
			cout<<"\n\n\t\t\t"<<num1<<" + "<<num2<<" = "<<num1+num2;
	    break;
	
		case '-':  //if the operator is + then it will run
			cout<<"\n\n\t\t\t"<<num1<<" - "<<num2<<" = "<<num1-num2;
	    break;
	
		case '*':  //if the operator is + then it will run
			cout<<"\n\n\t\t\t"<<num1<<" * "<<num2<<" = "<<num1*num2;
	    break;
	
		case '/':  //if the operator is + then it will run
			cout<<"\n\n\t\t\t"<<num1<<" / "<<num2<<" = "<<num1/num2;
		break;
		default:  //if by mistake anything other than"+,-,*,/" is entered ,will run.
		cout<<"\n\n\t\t\tINVALID OPERATION";
		break;
	}
	
	return 0;
}
