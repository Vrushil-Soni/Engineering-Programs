#include<iostream>

using namespace std;

class complex  {
 
	public :

		int x,y;


	void display()  {
 
		cout<<x<<"+"<<y<<"i";
	} 

	complex operator+(complex c)  {
 
		complex ans;
 		ans.x=x+c.x;
 		ans.y=y+c.y;
 		return ans;
	}

	complex operator-(complex c)  {

       		complex ans;
		ans.x=x-c.x;
		ans.y=y-c.y; 
		return ans;
	}

	complex operator*(complex c) {
 
		complex ans;
 		ans.x=x*c.x-y*c.y;
 		ans.y=x*c.y+y*c.x;
 		return ans;
	}

/*	complex operator/(complex c)  {
 
		complex ans,s1;
		int d;
 		d=(c.x*c.x)+(c.y*c.y);
 		s1.x=x*c.x+y*c.y;
 		s1.y=c.x*y-c.y*x;
 		ans.x=s1.x/d;
 		ans.y=s1.y/d;
 		return ans;
	}*/
};


int main() {

	complex c1,c2,c3;

	cout<<"Enter the first complex no :"<<endl;
	cin>>c1.x>>c1.y;

	cout<<"Enter the second complex no :"<<endl;
	cin>>c2.x>>c2.y;

	cout<<"First complex no is : ";
	c1.display();

	cout<<endl;
	cout<<endl;

	cout<<"Second complex no is : ";
	c2.display();

	cout<<endl;
	cout<<endl;

	c3=c1+c2;
	cout<<"Addition of two complex no is : ";
	c3.display();

	cout<<endl;
	cout<<endl;

	c3=c1-c2;
	cout<<"Subtraction of two complex no is : ";
	c3.display();

	cout<<endl;
	cout<<endl;

	c3=c1*c2;
	cout<<"Multiplication of two complex no is : ";
	c3.display();

	cout<<endl;
	cout<<endl;

/*	c3=c1/c2;
	cout<<"Division of two complex no is : ";
	c3.display();

	cout<<endl;
	cout<<endl;*/

	return 0;
}
