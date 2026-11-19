#include <iostream>
using namespace std;
int main(){
    int n;
    string triangle="";
    cout<<"Enter number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            triangle+="*";
            if(n==i){
                cout<<triangle<<endl;
            }
            continue;
        }
        triangle+=to_string(i);
        cout<<triangle<<endl;
    }
    return 0;
}
