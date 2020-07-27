
#include<iostream>
 
using namespace std;

	template <class T>

void bubble_sort(T a[], int n)   {
    
	int i, j;
    
	for(i=0;i<n-1;i++)  {
        
		for(j=i+1;j<n;j++)  {
            
			if(a[i]>a[j])  {
                
				T element;
                		element = a[i];
                		a[i] = a[j];
           	     		a[j] = element;
            		}
		}
	}
} 

int main() {
	
	int a[100],n,i;
	float b[100];
   	cout<< " How many elements you want :\n ";
    	cin>> n;
	cout<< " Enter integers the elements :\n ";
  
	for(int i=0;i<n;i++)  {

		cin>>a[i];
	}
    
	bubble_sort (a,5);
    	cout<<"\n Sorted Order Integers : ";
   
 	for(int i=0;i<5;i++){
        
		cout<<a[i]<<"\t";
	}

	cout<< "\n How many elements you want :\n ";
    	cin>> n;
	cout<< "\n Enter float the elements :\n ";
  	
	for(int i=0;i<n;i++)  {
		
		cin>>b[i];
	}
    	
	bubble_sort (b,4);
    	cout<<" Sorted Order float : \t ";
    
	for(int j=0;j<4;j++){
        
		cout<< b[j]<<"\t";
	}
	cout<<"\n";

	return 0; 
   
}
