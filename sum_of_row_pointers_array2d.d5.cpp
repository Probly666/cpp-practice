/*5. Dynamic Two-Dimensional Array — pointer to pointer + dynamic memory
Read positive integers rows and cols. Create a table with int** matrix = new int*[rows]; and
allocate every row with new int[cols]. Fill the table with values entered by the user using the
expression *(*(matrix + i) + j).
Print the sum of each row and the number of the row with the largest sum. Release the
memory: first delete[] every row, then delete[] matrix.*/
#include <iostream>
using namespace std;
int main(){
    int row=0,col=0;
    cin >> row >> col;

    int** matrix = new int*[row];          // array 1D {adsess,adress...} len=row
                                           //                                                            len=row
    for (int i = 0; i < row; i++)          //                                      len = col          len = col       len = col    
        matrix[i] = new int[col];          // define adress like other array --> {{adress,adress..},{adress,adress...},{adress,adress...}....}
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"entering for ["<<i<<"]"<<"["<<j<<"]"<<" ";
            cin>>*(*(matrix+i)+j);
        }
    }
    int* sum=new int[row];
    int k=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum[k]+=matrix[i][j];
        }
    
    ++k;
    }
    for(int j=0;j<k;j++){
        cout<<sum[j]<<" ";
    }
    for(int i=0;i<row;i++){
        delete[] matrix[i];
    
    delete[] matrix;
    delete[] sum;
    return 0;
    }
}
