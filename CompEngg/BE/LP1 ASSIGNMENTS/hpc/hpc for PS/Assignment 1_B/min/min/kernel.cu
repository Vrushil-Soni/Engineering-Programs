#include <cuda.h>
#include <iostream>

using namespace std;

#define SIZE 9


__global__ void min(int* a, int* c)
{
	int i = threadIdx.x;

	*c = a[0];

	if (a[i] < *c)
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
	min <<<1, SIZE >>> (dev_a, dev_c);
	cudaMemcpy(&c, dev_c, SIZE * sizeof(int), cudaMemcpyDeviceToHost);

	cout << "\n min value = ";
	cout << c;

	cudaFree(dev_a);
	cudaFree(dev_c);


	return 0;
}
/*
Enter the numbers  :
10
54
23
7
4
32
33
15
40
10 54 23 7 4 32 33 15 40
 min value = 4
C:\Users\Vrushil\Desktop\ProgramSupplier\HPC running\Assignment1B\min\x64\Debug\min.exe (process 17564) exited with code 3.
Press any key to close this window . . .

*/
