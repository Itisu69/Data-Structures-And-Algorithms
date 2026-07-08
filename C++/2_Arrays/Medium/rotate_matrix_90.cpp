#include <bits/stdc++.h>
using namespace std;

void rotateArray(vector<vector<int>> &matrix) {
    if (matrix.size() == 1)
        return;

    // Transposing of matrix
    for (int i = 0; i <= matrix.size()-2; i++) {
        for (int j = i+1; j <= matrix.size()-1; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Reversing every row of the matrix
    for (int i = 0; i < matrix.size(); i++) {
        int p1 = 0, p2 = matrix[0].size()-1;

        while (p1 < p2) {
            swap(matrix[i][p1++], matrix[i][p2--]);
        }
    }
}

int main() {
    vector<vector<int>> m = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    rotateArray(m);
    for (auto row : m) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}