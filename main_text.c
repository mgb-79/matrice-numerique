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
  printf("Right! Do you want to create your image pixel by pixel or fill your "
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
    printf("Your PPM file's name ?\n");
    scanf("%99s", file_name);
    save_file(m, file_name);
  }
  return 0;
}