/*this is simple prime detector*/
#include <iostream>
using namespace std;
int main(){
    int a,i;
    cout<<"##### Wellcome to prime detector #####\n\n";
    cout<<"enter number: ";
    cin>>a;
    if(a<2){ 
        cout<<"not prime\n";
        return 0;
    }
    for(i=2;i<a;i++){
        if(a%i==0){
            cout<<"not prime,has more than two divisors.\n\n";
            return 0;
        }
    }
    cout<<"prime, has only 2 divisors 1 and "<<a<<endl;
    return 0;
}
