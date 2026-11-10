#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++)
        matrix[i] = new int[cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "enter [" << i << "][" << j << "]: ";
            cin >> *(*(matrix + i) + j);
        }
    }

    int maxSum = 0, maxRow = 0;
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;                              
        for (int j = 0; j < cols; j++)
            rowSum += *(*(matrix + i) + j);

        cout << "sum of row " << i + 1 << ": " << rowSum << endl;

        if (i == 0 || rowSum > maxSum) {             
            maxSum = rowSum;
            maxRow = i;
        }
    }
    cout << "largest sum is in row " << maxRow + 1
        << " (" << maxSum << ")" << endl;

    for (int i = 0; i < rows; i++)
        delete[] matrix[i];                          
    delete[] matrix;                                 
    return 0;
}
