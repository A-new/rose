#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define PTR_SIZE 100
#define PTR2_SIZE 10
#define PTR3_SIZE 10
#define OUT_OF_BOUNDS_EXCESS 1
#define ARRAY_SIZE 29
#define ARRAY2_SIZE 49



unsigned int* fn2(void* voidin, unsigned int*, float*, double*, char*); 

void print_array(unsigned int* array, unsigned int size);


unsigned int* fn1(unsigned int* input) {
    
    unsigned int* nullptr = fn2((void*)input, input, (float*)input, (double*)input, (char*)input);

    printf("input: %u\n", *input);
    return (unsigned int*)malloc(PTR_SIZE*sizeof(unsigned int));
}

unsigned int* fn2(void* voidin, unsigned int* input, float* input2, double* input3, char* input4) {
    return NULL;
}


int main() {
       
    unsigned int *no_init_ptr;

    unsigned int *ptr = (unsigned int*)malloc(PTR_SIZE*sizeof(int));
    unsigned int *ptr2 = (unsigned int*)malloc(PTR2_SIZE*sizeof(int));

    unsigned int* ptr_index;
    unsigned int counter = 0;
    for(ptr_index = ptr; ptr_index < ptr + PTR_SIZE; ptr_index++) {
        *ptr_index = counter++;
    }

    for(ptr_index = ptr + PTR_SIZE - 1; ptr_index >= ptr; ptr_index--) {
        printf("%u\n", *ptr_index);
    }


    return 1;
}
