#include<iostream>

using namespace std;

class student {

	int roll_no;
	char name[50];
	long phone_no;
	char class_room[10];
	char div[5];
	long lic_no;
	char blood_group[5];

	public:

		void getdata();
		void displaydata();

};
	
void student::getdata(){
		cout<<"\n enter roll no--:\t";

		cin>>roll_no;

		cout<<"\n enter name of student--:\t";

		cin>>name;

		cout<<"\n enter phone no--:\t";

		cin>>phone_no;

		cout<<"\n enter class room--:\t";

		cin>>class_room;

		cout<<"\n enter division--:\t";

		cin>>div;

		cout<<"\n enter the licence no--:\t";

		cin>>lic_no;

		cout<<"\n enter blood group--:\t";

		cin>>blood_group;
}

void student::displaydata(){


		cout<<"\n----------------------student_details-------------------\n";

		cout<<"\n enter roll no--: "<<roll_no;

		cout<<"\n enter name of student--: "<<name;

		cout<<"\n enter phone no--: "<<phone_no;

		cout<<"\n enter class room--: "<<class_room;

		cout<<"\n enter division--: "<<div;

		cout<<"\n enter licence no--: "<<lic_no;

		cout<<"\n enter blood group--: "<<blood_group;
}

int main(){

	int num ,i;
	cout<<" Eter the no of record : ";
	cin>>num;

	student s[num];

	for(i=0;i<num;i++){

		s[i].getdata();
	}
	for(i=0;i<num;i++){

		s[i].displaydata();
	}
	return 0;
}
	
