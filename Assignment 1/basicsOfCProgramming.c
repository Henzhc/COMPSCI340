#include <stdio.h>
#include <stdlib.h>

// struct
struct MyStruct
{
    int a;
    int b;
};

// function declarations
void pointers(void);
void structs(void);
void arrays(void);
void dynamicAllocation(void);

// main function
int main(const int argc, const char **argv) // argc = argument count, argv = argument vector
{
    // 1. pointers
    // pointers();

    // 2. structs
    // structs();

    // 3. arrays
    // arrays();

    // 4. dynamic allocation
    // dynamicAllocation();

    // return 0 if everything went well
    // return non-zero if something went wrong
    return 0;
}

// function definitions
void pointers(void)
{
    int num = 20;      /* actual variable declaration */
    int *pointerToNum; /* pointer variable declaration */

    pointerToNum = &num; /* store address of var in pointer variable*/

    printf("Address of var variable: %p\n", &num);

    /* address stored in pointer variable */
    printf("Address stored in ip variable: %p\n", pointerToNum);

    /* access the value using the pointer (dereferencing) */
    printf("Value of *ip variable: %d\n", *pointerToNum);
}

void structs(void)
{
    struct MyStruct data;

    data.a = 12;
    data.b = 24;

    struct MyStruct *dataPointer = &data;
    dataPointer->a = 4;
    // (*dataPointer).a = 4;

    printf("struct addition %d\n", dataPointer->b + data.a);
}

void arrays(void)
{
    // fixed size
    int arr[3] = {1, 2, 3};
    printf("value in index 2 is %d\n", arr[2]);
}

void dynamicAllocation(void)
{
    int *ptr = (int *)malloc(3 * sizeof(int));
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;

    // create same pointer using calloc
    // int *ptr = (int *)calloc(3, sizeof(int));

    printf("value in index 2 is %d\n", ptr[2]);

    // // print each element of the allocated memory by malloc
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("value in index %d is %d\n", i, ptr[i]);
    // }
    // printf("====================================\n");

    // // resize
    // ptr = (int *)realloc(ptr, 4 * sizeof(int));

    // // add new value
    // ptr[3] = 4;

    // // print each element of the allocated memory by malloc
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("value in index %d is %d\n", i, ptr[i]);
    // }

    // good practice to free memory to prevent memory leaks
    free(ptr);
}