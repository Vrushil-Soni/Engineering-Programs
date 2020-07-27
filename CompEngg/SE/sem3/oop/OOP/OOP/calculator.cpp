#include<iostream>

using namespace std;

	class calculator{

		public:
		float no1,no2,ans;
		char c;
		
	calculator(float inpt1,char ch,float  inpt2) {
		
		no1=inpt1;
		c=ch;
		no2=inpt2;
	}

	float operation(){
	
		switch(c){
	
		case'+':
			ans=no1+no2;
			break;

		case'-':
			ans=no1-no2;
			break;

		case'*':
			ans= no1*no2;	
			break;
		case'/':
			ans = no1/no2;
			break;
		}

		        return ans;
		
        }  
};

int main(){

	float inpt1,inpt2,result;
	char ch,temp,y,n;
		
		do{		
			cout<<"Enter  :: First number : operator : Second number : \n";
		
			cin>>inpt1>>ch>>inpt2;

			calculator s(inpt1,ch,inpt2);
	
			result = s.operation();

			cout<< " ans : "<< result;

			cout<<"\n Do another(y/n) =  ";
	
			cin>>temp;

		}
		while(temp =='y');

		return 0;
}
		
