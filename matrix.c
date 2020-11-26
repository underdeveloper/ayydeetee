#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "matrix.h"

Matrix matrix(int height, int width) {
    Matrix new_mtx;
    new_mtx.data = (int*) malloc(height*width*sizeof(int));
    new_mtx.height = height;
    new_mtx.width = width;
    return new_mtx;
};

void input_matrix(Matrix this_mtx) {
    int row, col;
    int *crawler = this_mtx.data;
    for (row=1;row<=this_mtx.height;++row) {
        for (col=1;col<=this_mtx.width;++col) {
            printf("Insert for row %d, column %d: ", row, col);
            scanf("%d", crawler);
            crawler += 1;
        }
    }
    printf("\n");
}

void insert_value_to_cell_matrix(Matrix this_mtx, int row, int col, int value) {
    int *crawler = this_mtx.data;
    crawler += ((row-1)*this_mtx.width) + (col-1);
    *crawler = value;
}

int give_cell_value_matrix(Matrix this_mtx, int row, int col) {
    int *crawler = this_mtx.data;
    crawler += ((row-1)*this_mtx.width) + (col-1);
    return *crawler;
}

void display_matrix(Matrix this_mtx) {
    int row, col;
    int *crawler = this_mtx.data;
    for (row = 1; row <= this_mtx.height; ++row)
    {
        for (col = 1; col <= this_mtx.width; ++col)
        {
            printf("%6d ", *crawler);
            crawler += 1;
        }
        printf("\n");
    }
    printf("\n");
}

Matrix transpose_matrix(Matrix this_mtx) {
    Matrix transpose = matrix(this_mtx.width, this_mtx.height);
    int row, col;
    int *crawler = this_mtx.data;
    for (row = 1; row <= this_mtx.height; ++row)
    {
        for (col = 1; col <= this_mtx.width; ++col)
        {
            change_elmt(transpose, col, row, *crawler);
            crawler += 1;
        }
    }
    return transpose;
}
