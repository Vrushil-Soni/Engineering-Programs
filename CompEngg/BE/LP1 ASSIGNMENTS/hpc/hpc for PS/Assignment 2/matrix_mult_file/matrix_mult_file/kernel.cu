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
	int N = 16, i, j;				//N == size of square matrix
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
			b[i * N + j] = 1.0; //(float)(i*N+j);		//random functions can be used alternatively
		}
	}

	cudaMalloc(&ad, size);
	cudaMalloc(&bd, size);
	cudaMalloc(&cd, size);

	cudaMemcpy(ad, a, size, cudaMemcpyHostToDevice);
	cudaMemcpy(bd, b, size, cudaMemcpyHostToDevice);

	dim3 blocksize(8, 8);		    //each block contains 16 * 16 (=256) threads
	dim3 gridsize(N / 8, N / 8);		//creating just sufficient no of blocks

	matrix_mul << <gridsize, blocksize >> > (ad, bd, cd, N);


	cudaMemcpy(c, cd, sizeof(float) * N * N, cudaMemcpyDeviceToHost);

	fprintf(f, "Array A was---\n");
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++)
			fprintf(f, "%f ", a[i * N + j]);
		fprintf(f, "\n");
	}
	fprintf(f, "\nArray B was---\n");
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++)
			fprintf(f, "%f ", b[i * N + j]);
		fprintf(f, "\n");
	}
	fprintf(f, "\nMultiplication of A and B gives C----\n");
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++)
			fprintf(f, "%f ", c[i * N + j]); //if correctly computed, then all values must be N
		fprintf(f, "\n");
	}
	printf("\nYou can see output in Parallel Mutiply.txt file in project directory");

	fclose(f);

	cudaThreadExit();
	free(a);
	free(b);
	free(c);
	return 1;
}

/*

You can see output in Parallel Mutiply.txt file in project directory
C:\Users\Vrushil\Desktop\ProgramSupplier\HPC running\Assignment2\matrix_mult_file\x64\Debug\matrix_mult_file.exe (process 17716) exited with code 1.
Press any key to close this window . . .

*/