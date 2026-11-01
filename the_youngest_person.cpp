/*1. The Youngest Person — nested structures + array of structures + std::string
Declare structures Date (day, month, year) and Person (string name and a member birthday of
type Date). Read n (1 to 20) and an array of n people.
Write a function bool isLater(const Date& a, const Date& b) that checks whether date a is
later than date b (compare the year, then the month, then the day). Use it in a loop to find and print
the youngest person with the birthday in the form day.month.year.*/
#include <iostream>
using namespace std;
struct Date{
    int day,month,year;
};
struct Person{
    string name;
    Date birthday;
};
bool is_later(const Date& a,const Date& b){
    if (a.year != b.year) {
        return a.year > b.year;
    }
    if (a.month != b.month) {
        return a.month > b.month;
    }
    return a.day > b.day;
}
int main(){
    int n;
    cout<<"Enter int(1 till 20)";
    cin>>n;
    if(n<1 || n>20) return 1;

    Person* arr = new Person[n];
    for(int i =0;i<n;i++){
        cout<<"Enter your name:";
        cin>>arr[i].name;
        cout<<"Enter your day:";
        cin>>arr[i].birthday.day;
        cout<<"Enter your month:";
        cin>>arr[i].birthday.month;
        cout<<"Enter your year:";
        cin>>arr[i].birthday.year;
    }

    Person youngest = arr[0];
    for(int j=1;j<n;j++){
        if(is_later(arr[j].birthday,youngest.birthday)){
            youngest=arr[j];
        }
    }
    cout<<"Youngest person name is :"<<youngest.name<<"\nYoungest person birthday:"<<youngest.birthday.day<<"."<<youngest.birthday.month<<"."<<youngest.birthday.year<<endl;
    delete[] arr;
}
