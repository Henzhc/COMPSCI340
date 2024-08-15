/*  The Matrix Multiplication to use for Operating Systems Assignment 1 2024
    written by Shyamli Sindhwani

    Modified by: Henry Chen
    UPI: hche466

    By submitting a program you are claiming that you and only you have made
    adjustments and additions to this code.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>

const int MAX_SIZE = 4;

struct values {
  int first;
  int second;
};

void* matrix_multiply(void* values) {
  
  return 0;
}


int main(int argc, char *argv[])
{
  pthread_t thread_id;
  int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine) (void *), void *arg);
  phtread_join(thread_id, NULL);

  if (argc < 2)
  {
    printf("Usage: %s [matrix_size] [optional_seed]\n", argv[0]);
    return 1;
  }

  int n = atoi(argv[1]);

  int seed = 0;
  if (argc == 3)
  {
    seed = atoi(argv[2]);
  }


  int **A = (int **)calloc(n, sizeof(int *));
  int **B = (int **)calloc(n, sizeof(int *));
  int **C = (int **)calloc(n, sizeof(int *));

  for (int i = 0; i < n; i++) {
    A[i] = (int *)calloc(n, sizeof(int));
    B[i] = (int *)calloc(n, sizeof(int));
    C[i] = (int *)calloc(n, sizeof(int));
  }


  // Initialize input matrices with random values
  if (n <= MAX_SIZE)
  {
    srand(seed);
  }
  else
  {
    srand(time(NULL));
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      A[i][j] = rand() % 10;
      B[i][j] = rand() % 10;
    }
  }

  if (n <= MAX_SIZE)
  {
    // Print the input matrices
    printf("Input matrices:\n");
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        printf("%d ", A[i][j]);
      }
      printf("\n");
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        printf("%d ", B[i][j]);
      }
      printf("\n");
    }
  }
}
