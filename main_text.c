#include "alloc.h"
#include "free_matrix.h"
#include "matrix.h"
#include "pixel.h"
#include "ppm.h"
#include "struct.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  int size, answer;
  char color;
  char file_name[100];
  printf("Welcome to this PPM file manager!\n Let's create your image :\nWhat "
         "size do you want for your image ?\n");
  scanf("%d", &size);
  matrix *m = create_matrix_blank(size);
  do {
    printf(
        "Right! Do you want to create your image pixel by pixel or fill your "
        "image with a specific color ? (1/2)\n");
    scanf("%d", &answer);
    if (answer == 2) {
      printf("What color do you want to fill your image with? (r/g/b)\n");
      scanf(" %c", &color);
      pixel *p = new_pixel();
      if (color == 'r') {
        change_color_pixel(p, 'r', 255);
      } else if (color == 'g') {
        change_color_pixel(p, 'g', 255);
      } else if (color == 'b') {
        change_color_pixel(p, 'b', 255);
      }
      fill_matrix(m, p);
    } else if (answer == 1) {
      printf("OK. For each pixel, say what contrast of color you want.\n");
      unsigned char r, g, b;
      int ri, gi, bi;
      for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
          pixel *p = new_pixel();
          printf("Pixel %d %d, what do you want as color ?\nR :\n", i + 1,
                 j + 1);
          scanf(" %d", &ri);
          printf("G :");
          scanf(" %d", &gi);
          printf("B :");
          scanf(" %d", &bi);
          r = (unsigned char)ri;
          g = (unsigned char)gi;
          b = (unsigned char)bi;
          change_color_pixel(p, 'r', r);
          change_color_pixel(p, 'g', g);
          change_color_pixel(p, 'b', b);
          set_cell_matrix(m, i, j, p);
        }
      }
    }
  } while (answer != 1 && answer != 2);
  printf("Your PPM file's name ?\n");
  scanf("%99s", file_name);
  save_file(m, file_name);
  printf("File successfully saved.\n");
  return 0;
}