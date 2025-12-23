#include <stdio.h>
#include "alloc.h"
#include "struct.h"
#include "matrix.h"
#include "free_matrix.h"

int main()
{
    matrix *m = create_matrix_blank(3);
    print_matrix(m);
    printf("\n");
    set_cell_matrix(m, 0, 0, 'a');
    print_matrix(m);
    free_matrix(m);
    return 0;
}