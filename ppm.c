#include "alloc.h"
#include "matrix.h"
#include "struct.h"
#include <stdio.h>
#include <stdlib.h>

void save_file(matrix *m, const char *file_name) {
  FILE *f = fopen(file_name, "w");
  fprintf(f, "P3\n");
  fprintf(f, "%d %d\n", get_dimension_matrix(m), get_dimension_matrix(m));
  fprintf(f, "255\n");
  for (int i = 0; i < get_dimension_matrix(m); i++) {
    for (int j = 0; j < get_dimension_matrix(m); j++) {
      fprintf(f, "%3d %3d %3d   ", m->data[i][j].r, m->data[i][j].g,
              m->data[i][j].b);
    }
    fprintf(f, "\n");
  }
  fclose(f);
}