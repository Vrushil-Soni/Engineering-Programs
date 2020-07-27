/* Matrix Multiplication in CUDA */
#include<stdio.h>
__global__ void matrix_mul(float* ad, float* bd, float* cd, int N) {
	float pvalue = 0;
	int Row = blockIdx.y * blockDim.y + threadIdx.y;
	int Col = blockIdx.x * blockDim.x + threadIdx.x;

	for (int i = 0; i < N; ++i) {
		float m = ad[Row * N + i];
		float n = bd[i * N + Col];
		pvalue += m * n;
	}

	cd[Row * N + Col] = pvalue;

}
int main() {
	int N = 8, i, j;				//N == size of square matrix
	float* a, * b, * c;
	float* ad, * bd, * cd;

	FILE* f;
	f = fopen("Parallel Multiply.txt", "w");

	size_t size = sizeof(float) * N * N;

	a = (float*)malloc(size);
	b = (float*)malloc(size);
	c = (float*)malloc(size);

	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			a[i * N + j] = 1.0; //(float)(i*N+j);	//initializing each value with its own index
			b[i * N + j] = 1.0; //(float)(i*N+j);	//random functions can be used alternatively
		}
	}
	cudaMalloc(&ad, size);
	cudaMalloc(&bd, size);
	cudaMalloc(&cd, size);

	cudaMemcpy(ad, a, size, cudaMemcpyHostToDevice);
	cudaMemcpy(bd, b, size, cudaMemcpyHostToDevice);
	printf("\nAfter HostToDevice Memcpy\n%s\n",
		cudaGetErrorString(cudaGetLastError()));

	dim3 blocksize(8, 8);		    //each block contains 16 * 16 (=256) threads
	dim3 gridsize(N / 8, N / 8);		//creating just sufficient no of blocks

	matrix_mul << <gridsize, blocksize >> > (ad, bd, cd, N);

	cudaMemcpy(c, cd, sizeof(float) * N * N, cudaMemcpyDeviceToHost);
	printf("\nAfter DeviceToHost Memcpy\n%s\n",
		cudaGetErrorString(cudaGetLastError()));

	printf("Array A was---\n");
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++)
			printf("%f ", a[i * N + j]);
		printf("\n");
	}
	printf("\nArray B was---\n");
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++)
			printf("%f ", b[i * N + j]);
		printf("\n");
	}
	printf("\nMultiplication of A and B gives C----\n");
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++)
			printf("%f ", c[i * N + j]); //if correctly computed, then all values must be N
		printf("\n");
	}
	printf("\nYou can see output in Parallel Mutiply.txt file in project directory");

	fclose(f);

	free(a);
	free(b);
	free(c);
	return 1;
}
/*
After HostToDevice Memcpy
no error

After DeviceToHost Memcpy
no error
Array A was---
1.000000 1.000000 1.000000 1.000000 1.000000 1.000000 1.000000 1.000000
1.000000 1.000000 1.000000 1.000000 1.000000 1.000000 1.000000 1.000000
1.000000 1.000000 1.000000 1.000000 1.000000 1.000000 1.000000 1.000000
1.000000 1.000000 1.000000 1.000000 1.000000 1.000000 1.000000 1.000000
1.000000 1.000000 1.000000 1.000000 1.000000 1.000000 1.000000 1.000000
1.000000 1.000000 1.000000 1.000000 1.000000 1.000000 1.000000 1.000000
1.000000 1.000000 1.000000 1.000000 1.000000 1.000000 1.000000 1.000000
1.000000 1.000000 1.000000 1.000000 1.000000 1.000000 1.000000 1.000000

Array B was---
1.000000 1.000000 1.000000 1.000000 1.000000 1.000000 1.000000 1.000000
1.000000 1.000000 1.000000 1.000000 1.000000 1.000000 1.000000 1.000000
1.000000 1.000000 1.000000 1.000000 1.000000 1.000000 1.000000 1.000000
1.000000 1.000000 1.000000 1.000000 1.000000 1.000000 1.000000 1.000000
1.000000 1.000000 1.000000 1.000000 1.000000 1.000000 1.000000 1.000000
1.000000 1.000000 1.000000 1.000000 1.000000 1.000000 1.000000 1.000000
1.000000 1.000000 1.000000 1.000000 1.000000 1.000000 1.000000 1.000000
1.000000 1.000000 1.000000 1.000000 1.000000 1.000000 1.000000 1.000000

Multiplication of A and B gives C----
8.000000 8.000000 8.000000 8.000000 8.000000 8.000000 8.000000 8.000000
8.000000 8.000000 8.000000 8.000000 8.000000 8.000000 8.000000 8.000000
8.000000 8.000000 8.000000 8.000000 8.000000 8.000000 8.000000 8.000000
8.000000 8.000000 8.000000 8.000000 8.000000 8.000000 8.000000 8.000000
8.000000 8.000000 8.000000 8.000000 8.000000 8.000000 8.000000 8.000000
8.000000 8.000000 8.000000 8.000000 8.000000 8.000000 8.000000 8.000000
8.000000 8.000000 8.000000 8.000000 8.000000 8.000000 8.000000 8.000000
8.000000 8.000000 8.000000 8.000000 8.000000 8.000000 8.000000 8.000000

You can see output in Parallel Mutiply.txt file in project directory
C:\Users\Vrushil\Desktop\ProgramSupplier\HPC running\Assignment2\matrix_mult_console\x64\Debug\matrix_mult_console.exe (process 15256) exited with code 1.
Press any key to close this window . . .
*/


