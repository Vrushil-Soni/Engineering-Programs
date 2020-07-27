#include<iostream>
using namespace std;
 
class Personal  {
        protected:
                string name,address,dob,emailid;
                long int numb;
        public:
                Personal();             //default constructor.
                void getdata();
};
 
Personal::Personal() {
        name=address=dob=emailid=" NULL";
        numb=0;
}
 
void Personal::getdata() {
        cout<<"\nEnter Name:\t";
        cin>>name;
        cout<<"\nEnter Address:\t";
        cin>>address;
        cout<<"\nEnter Date of Birth:\t";
        cin>>dob;
        cout<<"\nEnter Email Id:\t";
        cin>>emailid;
        cout<<"\nEnter Phone Number:\t";        
        cin>>numb; 
}
 
class Professional {
        protected:
                int experience,salary_expected;
        public:
                Professional();
                void getdata();
};
 
Professional::Professional() 
{       experience=salary_expected=0;         }
 
void Professional::getdata() {
        cout<<"\nEnter Years of Experience:\t";
        cin>>experience;
        cout<<"\nEnter Salary Expected:\t";
        cin>>salary_expected;
}
 
class Academic {
        protected:
                float percent,sgpa;
                int grad;
        public:
                Academic();
                void getdata();
};
 
Academic::Academic() {
        percent=sgpa=0.0;
        grad=0;
}
 
void Academic::getdata() {
        cout<<"\nEnter 12th Percentage:\t";
        cin>>percent;
        cout<<"\nEnter Sgpa:\t";
        cin>>sgpa;
        cout<<"\nEnter Year of Graduation:\t";
        cin>>grad;
}
 
class bio_data: public Personal ,public Professional, public Academic  {
        public:
                void display();
};
 
void bio_data::display() {
        cout<<"\n**********************************************\n";
        cout<<"\n\t\t\tEMPLOYEE  BIO_DATA\n";
        cout<<"\nName:\t"<<name<<"\nAddress:\t"<<address<<"\nDate of Birth:\t"<<dob<<
                      "\nEmail Id:\t"<<emailid<<"\nPhone Number:\t"<<numb<<
                      "\nYears of experience:\t"<<experience<<"\nSalary Expected:\tRps "<<salary_expected<<
                      "\n12th Percentage:\t"<<percent<<"%\nSgpa:\t"<<sgpa<<"%\nYear of Graduation:\t"<<grad<<"\n";
}
 
int main() {
        bio_data obj;
        obj.Personal::getdata();
        obj.Professional::getdata();
        obj.Academic::getdata();
        obj.display();
 
        return 0;
}
