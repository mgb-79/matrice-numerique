#include "alloc.h"
#include "struct.h"
#include <stdio.h>
#include <stdlib.h>

matrix *new_matrix(int dimension) {
  matrix *m = malloc(sizeof(matrix));
  m->data = malloc(sizeof(char *) * dimension);
  for (int i = 0; i < dimension; i++) {
    m->data[i] = malloc(sizeof(pixel) * dimension);
  }
  m->dimension = dimension;
  return m;
}