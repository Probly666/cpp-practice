#include <iostream>
int main(){
long int user_input=0,total=0;
std::cin>>user_input;
    while(user_input>0){
        total+=user_input%10;
        user_input/=10;
    }
std::cout<<total;
return 0;
}
