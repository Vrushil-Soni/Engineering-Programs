#include <cuda.h>
#include <iostream>

using namespace std;

#define SIZE 7


__global__ void max(int* a, int* c)
{
	int i = threadIdx.x;

	*c = a[0];

	if (a[i] > * c)
	{
		*c = a[i];
	}

}

int main()
{
	int i;


	int a[SIZE];
	int c;

	int* dev_a, * dev_c;

	cudaMalloc((void**)& dev_a, SIZE * sizeof(int));
	cudaMalloc((void**)& dev_c, SIZE * sizeof(int));

	cout << "Enter the numbers  : \n";
	for (i = 0; i < SIZE; i++)
	{
		cin >> a[i];
	}
	for (i = 0; i < SIZE; i++)
	{
		cout << a[i] << " ";
	}

	cudaMemcpy(dev_a, a, SIZE * sizeof(int), cudaMemcpyHostToDevice);
	max << <1, SIZE >> > (dev_a, dev_c);
	cudaMemcpy(&c, dev_c, SIZE * sizeof(int), cudaMemcpyDeviceToHost);

	cout << "\n max value = ";
	cout << c;

	cudaFree(dev_a);
	cudaFree(dev_c);


	return 0;
}
/*
Enter the numbers  :
1
5
3
2
7
9
4
1 5 3 2 7 9 4
 max value = 4
C:\Users\Vrushil\Desktop\ProgramSupplier\HPC running\Assignment1B\max_min\x64\Debug\max_min.exe (process 14076) exited with code 3.
Press any key to close this window . . .
*/