#include<stdio.h>
#include<cuda.h>
#define N 512


__global__ void add(int* a, int* b, int* c)
{
	c[blockIdx.x] = a[blockIdx.x] + b[blockIdx.x];
}

int main(void)
{
	int* a, * b, * c;
	int* dev_a, * dev_b, * dev_c;
	int size = N * sizeof(int);
	int i;


	cudaMalloc((void**)& dev_a, size);
	cudaMalloc((void**)& dev_b, size);
	cudaMalloc((void**)& dev_c, size);

	a = (int*)malloc(size);
	b = (int*)malloc(size);
	c = (int*)malloc(size);

	for (i = 0; i < N; i++)
	{
		a[i] = i;
		b[i] = i;
	}

	cudaMemcpy(dev_a, a, size, cudaMemcpyHostToDevice);
	cudaMemcpy(dev_b, b, size, cudaMemcpyHostToDevice);

	add << <N, 1 >> > (dev_a, dev_b, dev_c);

	cudaMemcpy(c, dev_c, size, cudaMemcpyDeviceToHost);


	for (i = 0; i < 10; i++)
	{
		printf("addition of %ds is %d\n", i, c[i]);
	}

	free(a);
	free(b);
	free(c);
	cudaFree(dev_a);
	cudaFree(dev_b);
	cudaFree(dev_c);

	return 0;
}
/*
addition of 0s is 0
addition of 1s is 2
addition of 2s is 4
addition of 3s is 6
addition of 4s is 8
addition of 5s is 10
addition of 6s is 12
addition of 7s is 14
addition of 8s is 16
addition of 9s is 18

C:\Users\Vrushil\Desktop\ProgramSupplier\HPC running\addition.cu\x64\Debug\addition.cu.exe (process 4140) exited with code 0.
Press any key to close this window . . .

*/
