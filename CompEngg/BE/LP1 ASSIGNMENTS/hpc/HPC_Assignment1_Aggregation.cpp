#include<iostream>
#include<time.h>
#include<omp.h>
#include<cstdlib>
using namespace std;
int main()
{
	clock_t start,finish;
	int array[100000];
	cout<<"\n****************Parallel Execution*****************\n";
	int n=100000;
	for(int i=0;i<n;i++)
	{
		array[i]=rand()%10;
	}
	int min=9999;
	int max=-9999;
	int min_index;
	int max_index;
	float sum=0;
	double start_parallel=omp_get_wtime();
	#pragma omp parallel for
	for(int i=0;i<n;i++)
	{
		if(array[i]<min)
		{
			min=array[i];
			min_index=i;
		}
		if(array[i]>max)
		{
			max=array[i];
			max_index=i;
		}
		sum=sum+array[i];
	}
	double finish_parallel=omp_get_wtime();
	cout<<"\nmin is :"<<min;
	cout<<"\nmax is :"<<max;
	cout<<"\nsum is :"<<sum;
	cout<<"\navg is :"<<sum/n;
	cout<<"\ntotal time taken "<<finish_parallel-start_parallel<<"msec\n";
	cout<<"\n***************Sequential Execution*****************\n";
	min=9999;
	max=-9999;
	min_index;
	max_index;
	sum=0;
	start=clock();
	for(int i=0;i<n;i++)
	{
		if(array[i]<min)
		{
			min=array[i];
			min_index=i;
		}
		if(array[i]>max)
		{
			max=array[i];
			max_index=i;
		}
		sum=sum+array[i];
	}
	finish=clock();
	cout<<"\nmax is :"<<max;
	cout<<"\nmin is :"<<min;
	cout<<"\nsum is :"<<sum;
	cout<<"\navg is :"<<sum/n;
	cout<<"\nTotal time taken :"<<finish-start<<"msec\n\n";
	cout<<"Execution time of parallel is "<<(finish-start)/(finish_parallel-start_parallel)<<" times faster than sequential processing\n\n";
	return 0;
}
