/*3. Array of Pointers to Arrays — array of pointers + nested loops
Declare three arrays a, b and c of 5 integers each and read their values from the user. Declare
an array of pointers: int* rows[3] = { a, b, c };
Using nested loops over rows (and *(rows[i] + j) instead of []), calculate and print the sum
of each array. Then declare a pointer best that points to the array with the largest sum, find the
// largest element of that array through best and print its value and its index.*/
#include <iostream>
using namespace std;
int main(){
    int* a=new int[5];
    int* b=new int[5];
    int* c=new int[5];
    cout<<"fill array a";
    for(int* i=a;i<a+5;i++){
        cin>>*i;
    }
    cout<<"\n"<<"fill array b";
    for(int* i=b;i<b+5;i++){
        cin>>*i;
    }
    cout<<"\n"<<"fill array c";
    for(int* i=c;i<c+5;i++){
        cin>>*i;
    }
    int* rows[3]={a,b,c};
    int* sum[3]={0,0,0};
    for(int i =0;i<3;i++){
        for(int j=0;j<5;j++){
            sum[i]+=*(rows[i]+j);
        }
    }
    int* best=rows[0];
    int* bestsum=sum[0];
    int maxidx=0;
    for(int i=1;i<3;i++){
        if(*(best+i)<*(best+maxidx)){
            maxidx=i;
    int maxelm=*best;
    for(int* i=best;i<best+5;i++){
        if(*i>maxelm) maxelm=*i;
    }
    cout<<"best sum of array is: "<<bestsum<<endl<<"";
    
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int* a = new int[5];
    int* b = new int[5];
    int* c = new int[5];

    cout << "fill array a: ";
    for (int* p = a; p < a + 5; p++) cin >> *p;
    cout << "fill array b: ";
    for (int* p = b; p < b + 5; p++) cin >> *p;
    cout << "fill array c: ";
    for (int* p = c; p < c + 5; p++) cin >> *p;

    int* rows[3] = { a, b, c };
    int sums[3] = { 0, 0, 0 };

    // sum of each array 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            sums[i] += *(rows[i] + j);
        }
        cout << "sum of array " << i + 1 << ": " << sums[i] << endl;
    }

    // best describe array with larges sum of element 
    int* best = rows[0];
    int bestSum = sums[0];
    for (int i = 1; i < 3; i++) {
        if (sums[i] > bestSum) {
            bestSum = sums[i];
            best = rows[i];
        }
    }

    // the largest element in best and their index 
    int maxIdx = 0;
    for (int j = 1; j < 5; j++) {
        if (*(best + j) > *(best + maxIdx)) {
            maxIdx = j;
        }
    }
    cout << "max element: " << *(best + maxIdx)
        << ", index: " << maxIdx << endl;

    delete[] a;
    delete[] b;
    delete[] c;
    return 0;
}
