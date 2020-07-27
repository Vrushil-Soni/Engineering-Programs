/*
Title:-Parallel Sorting Algorithms-
For Bubble Sort and Merger Sort, based on existing sequential algorithms, design and
implement parallel algorithm utilizing all resources available.
*/

#include<iostream>
#include<stdlib.h>
#include<omp.h>
using namespace std;

void bubble(int *, int);
void swap(int &, int &);


void bubble(int *a, int n)
{
	for(  int i = 0;  i < n;  i++ )
	 {       
		int first = i % 2;      

		#pragma omp parallel for shared(a,first)
		for(  int j = first;  j < n-1;  j += 2  )
		  {       
			if(  a[ j ]  >  a[ j+1 ]  )
			 {       
  				swap(  a[ j ],  a[ j+1 ]  );
			 }       
	    	  }       
	 }
}


void swap(int &a, int &b)
{

	int test;
	test=a;
	a=b;
	b=test;

}

int main()
{

	int *a,n;
	cout<<"\n Enter total no of elements: ";
	cin>>n;
	a=new int[n];
	cout<<"\n Enter elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	bubble(a,n);
	
	cout<<"\n sorted array is: \n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}


return 0;
}

/*
	OUTPUT
vrushil@vrushil:~$ g++ bubble_sort.cpp -fopenmp
vrushil@vrushil:~$ ./a.out

 Enter total no of elements: 10

 Enter elements: 3
2
1
4
7
6
0
9
8
5

 sorted array is: 
0
1
2
3
4
5
6
7
8
9
vrushil@vrushil:~$ 


*/

