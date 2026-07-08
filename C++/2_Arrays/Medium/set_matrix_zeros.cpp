#include <bits/stdc++.h>
using namespace std;


void setMatrixZero(vector<vector<int>> &matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    // Initializing Flags
    bool first_row_has_zero = false;
    bool first_col_has_zero = false;

    // Checking if first row has any zeros
    for (int col = 0; col < cols; col++) {
        if (matrix[0][col] == 0) {
            first_row_has_zero = true;
            break;
        }
    }

    // Checking if first col has any zeros
    for (int row = 0; row < rows; row++) {
        if (matrix[row][0] == 0) {
            first_col_has_zero = true;
            break;
        }
    }


    // Marking rows and cols in first row/col
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; ++col) {
            if (matrix[row][col] == 0) {
                matrix[row][0] = 0;
                matrix[0][col] = 0;
            }
        }
    }


    // Set matrix zeros based on the markers
    for (int row = 1; row < rows; ++row) {
        for (int col = 1; col < cols; ++col) {
            if (matrix[row][0] == 0 || matrix[0][col] == 0) {
                matrix[row][col] = 0;
            }
        }
    }


    // Handling first row
    if (first_row_has_zero) {
        for (int col = 0; col < cols; col++) {
            matrix[0][col] = 0;
        }
    }

    // Handling first column
    if (first_col_has_zero) {
        for (int row = 0; row < rows; row++) {
            matrix[row][0] = 0;
        }
    }

}

int main() {
    vector<vector<int>> matrix = {{0,1,2,0},
                                  {3,4,5,2},
                                  {1,3,1,5}};

    setMatrixZero(matrix);
    for (auto row : matrix) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}