


#include<list>
#include<iostream>

using namespace std;

class dequeue {
 
	public:
 		int a;
 		list<int> s;
 		list<int>::iterator it;
 
	void push()   { 
 	
		cout<<"\n<enter the number: ";
 		cin>>a;
		s.push_front(a);
	}
 
	void push_back()   {
   
		cout<<"\n<enter the no: ";
   		cin>>a;
   		s.push_back(a);
	}
 
	void pop_b()  {
   
		it=s.end();
   		it--;
   		s.pop_back();
   		cout<<" the element popped out of the queue is: "<<*it;
	}
  
	void pop_front()   {
    
		it=s.begin();
    		s.pop_front();
    		cout<<"\n The element popped out of the queue is :"<<*it;
	} 

	void display()    {
     
		cout<<"\n  the element in the queue are: ";
     		for(it=s.begin();it!=s.end();it++)     {
        
			cout<<*it<<"\t";
     		}
	}
};
  
int main()   {
   
	dequeue d;
   	int choice;
   	char ans;
   
	do    {
     
		cout<<"\n1.push element at first \n2.push elemnt at back\n3.pop first element\n4.pop last element \n5.display";
     		cout<<"\n Enter the operaton you want to perform: ";
     		cin>>choice;
     		
		switch(choice)   {
       
		        case 1:
				d.push();
				break;
        
			case 2: 
				d.push_back();
        			break;
        
			case 3:
				d.pop_front();
				break;
        
			case 4:
				d.pop_b();
        			break;
        		case 5:
				d.display();
        			break;
        		default:
        			cout<<"\n Enter the corret option.\n";
        			break;
       		}
    	
		cout<<"\n Do you want to continue(if yes the press y): ";
    		cin>>ans;
   	}
	while(ans=='y'||ans=='Y');
}       
