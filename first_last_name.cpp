#include <iostream>
using namespace std;
struct Student{
    string name;
    int score;
    };
void printStudent(const Student& s){
    cout<<s.name<<"("<<s.score<<")\n";
}
int main(){
    int n=0;
    cout<<"Enter len(1 till 50):";
    cin>>n;
    if(n<1 ||n>50) return 1;
    Student* students=new Student[n];
    for(int i=0;i<n;i++){
        cout<<"Enter your name:";
        cin>>students[i].name;
        cout<<"Enter your score:";
        cin>>students[i].score;
    }
    Student first_student=students[0];
    Student last_student=students[0];
    for(int j=1;j<n;j++){
        if(students[j].name < first_student.name) first_student=students[j];
        else if(students[j].name > last_student.name) last_student=students[j];
    }
    printStudent(first_student);
    printStudent(last_student);
    delete[] students;
    return 0;
}
