#include "free_matrix.h"
#include "struct.h"
#include <stdio.h>
#include <stdlib.h>

void free_matrix(matrix *m) {
  for (int i = 0; i < m->dimension; i++) {
    free(m->data[i]);
  }
  free(m->data);
  return;
}

void free_pixel(pixel *p) { free(p); }