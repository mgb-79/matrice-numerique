#include "matrix.h"
#include "alloc.h"
#include "struct.h"
#include <stdio.h>
#include <stdlib.h>

matrix *create_matrix_blank(int dimension) {
  matrix *m = new_matrix(dimension);
  for (int i = 0; i < m->dimension; i++) {
    for (int j = 0; j < m->dimension; j++) {
      m->data[i][j].r = 0;
      m->data[i][j].g = 0;
      m->data[i][j].b = 0;
    }
  }
  return m;
}

void print_matrix(matrix *m) {
  for (int i = 0; i < m->dimension; i++) {
    for (int j = 0; j < m->dimension; j++) {
      printf("|%3d %3d %3d ", m->data[i][j].r, m->data[i][j].g,
             m->data[i][j].b);
    }
    printf("|\n");
  }
}

void fill_matrix(matrix *m, pixel *p) {
  for (int i = 0; i < m->dimension; i++) {
    for (int j = 0; j < m->dimension; j++) {
      m->data[i][j].r = p->r;
      m->data[i][j].g = p->g;
      m->data[i][j].b = p->b;
    }
  }
}
pixel *get_cell_matrix(matrix *m, int i, int j) {
  pixel *p = new_pixel();
  p->r = m->data[i][j].r;
  p->g = m->data[i][j].g;
  p->b = m->data[i][j].b;
  return p;
}

void set_cell_matrix(matrix *m, int i, int j, pixel *p) {
  m->data[i][j].r = p->r;
  m->data[i][j].g = p->g;
  m->data[i][j].b = p->b;
  return;
}

int get_dimension_matrix(matrix *m) { return m->dimension; }