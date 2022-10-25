
#include "include/cuda_runtime.h"
#include "include/device_launch_parameters.h"


#include <stdio.h>
#include "File.h"

// Device code  - GPU 
__global__ void HelloGPU(void) {
	printf("  Hello CUDA GPU\n");
}
int main() {

	printf("  Hello CPU 01 \n");

	HelloGPU << < 1, 1 >> > (); // Call GPU

	printf("  Hello CPU 02 \n");
	return 0;
}