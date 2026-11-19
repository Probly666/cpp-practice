#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float  a,b,c;
    float  res;
    cout<<"~~~~~Problem:ax+b=c~~~~~\n";
    cout<<"enter a,b,c like this:a b c\n";
    cin>>a>>b>>c;
    if(a==0){
        cout<<"zero*sth it's zero "<<"so\n"<<b<<"="<<c<<"?"<<endl;
        if((int)b==(int)c){
            cout<<"yes! Answer is : infinity\n";
        }
        else{
            cout<<"Nope( there is: no solution\n";
        }
        return 0;
    }
    cout<<"====firs step:"<<a<<"x+"<<b<<"="<<c<<endl;
    cout<<"====second step:"<< a<<"x="<<c<<"-"<<b<<endl;
    cout<<"====thirt step: x="<<"("<<c<<"-"<<b<<")"<<"/"<<a<<endl;
    res=(c-b)/a;
    cout<<"x="<<res<<endl;
    return 0;
}
