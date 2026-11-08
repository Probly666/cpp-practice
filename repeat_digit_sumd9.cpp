// /*5. Repeated Digit Sum — Nested while
// Read an integer and repeatedly calculate the sum of its digits until only one digit remains.
// Example:
// 9875
// → 29
// → 11
// → 2
// Use nested while loops*/
#include <iostream>
using namespace std;
int main(){
    long int num;
    cout<<"enter num:";
    cin>>num;
    for(int i =0;num>=10;i++){
        long int sum =0;
        for(int i=0;num>0;i++){
            sum+=num%10;
            num/=10;
        }
        cout<<sum<<endl;
        num=sum;
    }
    return 0;
}
