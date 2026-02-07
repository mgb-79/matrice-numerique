#include "alloc.h"
#include "matrix.h"
#include "struct.h"
#include <stdio.h>
#include <stdlib.h>

void change_color_pixel(pixel *p, char color, int value) {
  if (color == 'r') {
    p->r = value;
  } else if (color == 'g') {
    p->g = value;
  } else if (color == 'b') {
    p->b = value;
  } else {
    printf("wrong color!");
  }
}