/*Write a recursive function int sumRec(const int a[][MAX_COLS], int n, int m, int k) that
returns the sum of all elements, where k is a linear index (row = k / m, column = k % m).*/
#include <iostream>
const int MAX_COLS = 10;

void inputMatrix(int a[][MAX_COLS], int n, int m) {   //just give data for  function
    for (int i = 0; i < n; ++i) {                     //start loop untill len of raw
        std::cout << "Saving data for line [" << i << "]\n"; 
        for (int j = 0; j < m; ++j) {                 //entering into nested array to fill them,used fixed len of column
            std::cout << "Enter a[" << i << "][" << j << "]: ";
            std::cin >> a[i][j];                      //save data into 2D array
        }
    }
}

void printMatrix(const int a[][MAX_COLS], int n, int m) {
    std::cout<<"  ";                                 //stay one null space for table 
    for(int k=0;k<m;++k)                             //creating table headers
        std::cout<<" "<<k<<" ";                      
    std::cout<<"\n";                                
    for (int i = 0; i < n; ++i) {                    //starting loop whose inter into 2D array
        std::cout << i<<" ";                         //creating index header
        for (int j = 0; j < m; ++j)                  //entering into nested array
            std::cout  << a[i][j]<<" ";              //printing
        std::cout << "\n";
    }
}

int main() {
    int n, m;                                        //n for row,m for column
    std::cout << "Enter number of rows: ";
    std::cin >> n;
    std::cout << "Enter number of cols: ";
    std::cin >> m;
    if (n < 1 || n > 10 || m < 1 || m > MAX_COLS) {  //check for correct enter
        std::cout << "Size must be between 1 and 10\n";
        return 1;
    }

    int matrix[10][MAX_COLS];      
    inputMatrix(matrix, n, m);    
    printMatrix(matrix, n, m);
    return 0;     
}


