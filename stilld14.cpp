#include <iostream>
#include <cmath>
using namespace std;

int sum_of_number(int n){
    int total=0;
    while(n>0){
        total+=n%10;
        n/=10;
    }
    return total;
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        if((sum_of_number(i))%3==0){
            cout<<"skipped\n";
            continue;
        }

        if(i%5==0){
            cout<<"Five\n";
            continue;
        }
        cout<<"i: "<<i<<endl;
    }
}
