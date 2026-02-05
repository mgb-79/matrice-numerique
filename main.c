#include "alloc.h"
#include "free_matrix.h"
#include "matrix.h"
#include "struct.h"
#include <stdio.h>

int main() {
  matrix *m = create_matrix_blank(3);
  print_matrix(m);
  printf("\n");
  fill_matrix(m, 255, 255, 255);
  print_matrix(m);
  free_matrix(m);
  return 0;
}