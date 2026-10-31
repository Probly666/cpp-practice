/*2. First and Last in the Alphabet — array of structures + comparing strings + function
Declare a structure Student with members string name and int score. Read n (1 to 50) and an
array of n students (names without spaces).
In one loop find the student whose name is the first in the alphabet and the student whose
name is the last (strings are compared with < and >). Write a function void printStudent(const
Student& s) and use it to print both students in the form "name (score)".*/
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
