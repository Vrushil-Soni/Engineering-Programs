#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a, b, res;
	cout<<"Enter two number :";
	cin>>a>>b;
	res=a+b;
	cout<<"\nAddition = "<<res;
	res=a-b;
	cout<<"\nSubtraction = "<<res;
	res=a*b;
	cout<<"\nMultiplication = "<<res;
	res=a/b;
	cout<<"\nDivision = "<<res;
	getch();
}