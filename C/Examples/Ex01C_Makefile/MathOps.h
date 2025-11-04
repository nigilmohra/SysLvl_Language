// Header File

#include <stdio.h>

#ifndef MATHOPS

#define MATHOPS
// Inline Addition
static inline void add(int *a, int *b, int *result){
  *result = *a + *b;
}
// Inline Subtraction
static inline void sub(int *a, int *b, int *result){
  *result = *a - *b;
}
// Inline Multiplication
static inline void mul(int *a, int *b, int *result){
  *result = (*a) * (*b);
}
// Inline Division
static inline void div(int *a, int *b, float *result){
  if(*b != 0)
    *result = (float)(*a)/(*b);
  else {
    printf("Error\n");
    *result = 0.0f;
    }
}

#endif
