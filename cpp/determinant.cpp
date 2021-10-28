#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

void input_matrix(double* matrix, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i * columns + j];
        }
    }
}

void random_filling(double* matrix, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matrix[i * columns + j] = (rand() % 10) - 5;
        }
    }
}

void print_matrix(double* matrix, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << matrix[i * columns + j] << '\t';
        }
        cout << '\n';
        cout << '\n';
        cout << '\n';
        cout << '\n';
    }
}

double count_determinant(double* matrix, int rows, int columns) {
    double determinant = 0;
    int degree = 1;

    if (rows * columns == 1) { // base case
        return matrix[0];
    }
    else { // recursive case
        double* submatrix = new double[(rows - 1) * (columns - 1)]; // size*size - 2*size + 1
        // string decomposition
        for (int n = 0; n < columns; n++) {
            // submatrix initialization
            int offset = 0;
            for (int i = 0; i < rows - 1; i++) {
                for (int j = 0; j < columns - 1; j++) {
                    if (n == j) {
                        offset = 1;
                    }
                    submatrix[i * (columns - 1) + j] = matrix[(i + 1) * columns + j + offset];
                }
                offset = 0;
            }
            // calculating the determinant
            determinant += (degree * matrix[n] * count_determinant(submatrix, rows - 1, columns - 1));
            degree = -degree;
        }
        delete [] submatrix;
    }
    return determinant;
}

int main(int argc, char* argv) {
    srand(unsigned(time(0)));
    int rows;
    int columns;
    int size;

    cout << "Enter the size: ";
    cin >> size;
    rows = columns = size;

    double* matrix = new double[rows * columns];

    cout << '\n';
    random_filling(matrix, rows, columns);
    print_matrix(matrix, rows, columns);
    cout << '\n';

    cout << "determinant: " << count_determinant(matrix, rows, columns) << '\n';

    return 0;
}
