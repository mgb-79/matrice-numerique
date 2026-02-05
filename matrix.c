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

void fill_matrix(matrix *m, unsigned char r, unsigned char g, unsigned char b) {
  for (int i = 0; i < m->dimension; i++) {
    for (int j = 0; j < m->dimension; j++) {
      m->data[i][j].r = r;
      m->data[i][j].g = g;
      m->data[i][j].b = b;
    }
  }
}
char get_cell_matrix(matrix *m, int i, int j, char color) {
  if (color == 'r')
    return m->data[i][j].r;
  else if (color == 'g')
    return m->data[i][j].g;
  else if (color == 'b')
    return m->data[i][j].b;
  else
    printf("wrong color!\n");
  return -1;
}

void set_cell_matrix(matrix *m, int i, int j, char color, unsigned char c) {
  if (color == 'r')
    m->data[i][j].r = c;
  else if (color == 'g')
    m->data[i][j].g = c;
  else if (color == 'b')
    m->data[i][j].b = c;
  else
    printf("wrong color!\n");
  return;
}

int get_dimension_matrix(matrix *m) { return m->dimension; }