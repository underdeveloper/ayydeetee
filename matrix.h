#ifndef MATRIX_H
#define MATRIX_H

typedef struct Matrix {
    int *data;
    int height;
    int width;
} Matrix;

/* Initialises an empty matrix. */
Matrix matrix(int height, int width);

/* User inputs data into a matrix. */
void input_matrix(Matrix* mtx);

/* Inserts value to a specific cell within matrix. */
void insert_value_to_cell_matrix(Matrix* mtx, int row, int col, int value);

/* Returns the value from a specific cell within matrix. */
int get_cell_value_matrix(Matrix* mtx, int row, int col);

/* Displays matrix to console. */
void display_matrix(Matrix* mtx);

/* Returns the transpose of the matrix. */
Matrix transpose_matrix(Matrix* mtx);

/* Returns a matrix which is a crop/expansion of the matrix. */
Matrix change_size_matrix(Matrix* mtx, int height, int width);

#endif
