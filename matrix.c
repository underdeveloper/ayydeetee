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

void input_matrix(Matrix* mtx) {
    int row, col;
    int *crawler = mtx->data;
    for (row=1;row<=mtx->height;++row) {
        for (col=1;col<=mtx->width;++col) {
            printf("Insert for row %d, column %d: ", row, col);
            scanf("%d", crawler);
            crawler += 1;
        }
    }
    printf("\n");
}

void insert_value_to_cell_matrix(Matrix* mtx, int row, int col, int value) {
    int *crawler = mtx->data;
    crawler += ((row-1)*mtx->width) + (col-1);
    *crawler = value;
}

int get_cell_value_matrix(Matrix* mtx, int row, int col) {
    int *crawler = mtx->data;
    crawler += ((row-1)*mtx->width) + (col-1);
    return *crawler;
}

void display_matrix(Matrix* mtx) {
    int row, col;
    int *crawler = mtx->data;
    for (row = 1; row <= mtx->height; ++row) {
        for (col = 1; col <= mtx->width; ++col) {
            printf("%6d ", *crawler);
            crawler += 1;
        }
        printf("\n");
    }
    printf("\n");
}

Matrix transpose_matrix(Matrix* mtx) {
    Matrix transpose = matrix(mtx->width, mtx->height);
    int row, col;
    int *crawler = mtx->data;
    for (row = 1; row <= mtx->height; ++row) {
        for (col = 1; col <= mtx->width; ++col) {
            insert_value_to_cell_matrix(&transpose, col, row, *crawler);
            crawler += 1;
        }
    }
    return transpose;
}

Matrix change_size_matrix(Matrix* mtx, int height, int width) {
    Matrix result = matrix(height, width);
    int row, col;
    for (row = 1; row <= height; ++row) {
        for (col = 1; col <= width; ++col) {
            int value;
            if (mtx->height < row || mtx->width < col) {
                value = 0;
            } else {
                value = get_cell_value_matrix(mtx, row, col);
            }
            insert_value_to_cell_matrix(&result, row, col, value);
        }
    }
    return result;
}

