#ifndef STRUCT_H
#define STRUCT_H

typedef struct {
  unsigned char r, g, b;
} pixel;

// The structure which represents the matrix.
typedef struct {
  int dimension;
  pixel **data;
} matrix;

#endif