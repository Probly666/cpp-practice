/*4. Palindrome Lines — array of structures + std::string iterators + function
Declare a structure Line with members string text and bool palindrome. Read n (1 to 20) and
then n lines (use getline) into an array of Line.
Write a function bool isPalindrome(const string& s) that uses only iterators: a forward iterator
from begin() and a reverse iterator from rbegin() move together, and the characters are compared
ignoring the case of letters. Fill the member palindrome of every line with this function, print every
line with the word "palindrome" or "not a palindrome" and print how many palindromes there are.
An empty line is a palindrome*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
struct lines{
    std::string text;
    bool palindrome;
};
bool isPalindrom(const std::string& s){
    if (s.empty()) return true;

    auto it = s.begin();
    auto rit = s.rbegin();
    while (it != s.end() && rit != s.rend()) {
        if (std::tolower(static_cast<unsigned char>(*it)) != 
            std::tolower(static_cast<unsigned char>(*rit))) {
            return false;
        }
        ++it;
        ++rit;
    }
    return true;
}
int main(){
    int n=0;
    cout<<"enter n(1 till 20)";
    cin>>n;
    if(n<1 || n>20) return 1;
    lines* a=new lines[n];
    for(int i=0;i<n;i++){
        cout<<"enter name:";
        getline(cin,a[i].text);
    }
    delete[] a;
    return 0;
}
#include <iostream>
#include <string>
#include <cctype>

struct Line {
    std::string text;
    bool palindrome;
};

bool isPalindrome(const std::string& s) {
    if (s.empty()) return true;

    auto it = s.begin();
    auto rit = s.rbegin();


    while (it != s.end() && rit != s.rend()) {
        if (std::tolower(static_cast<unsigned char>(*it)) != 
            std::tolower(static_cast<unsigned char>(*rit))) {
            return false;
        }
        ++it;
        ++rit;
    }
    return true;
}

int main() {
    int n;
    std::cin >> n;
    std::cin >> std::ws;

    Line lines[20]; 
    int palindrome_count = 0;

    for (int i = 0; i < n; ++i) {
        std::getline(std::cin, lines[i].text);
        lines[i].palindrome = isPalindrome(lines[i].text);
        
        if (lines[i].palindrome) {
            palindrome_count++;
        }
    }

    for (int i = 0; i < n; ++i) {
        std::cout << "\"" << lines[i].text << "\" is " 
                  << (lines[i].palindrome ? "palindrome" : "not a palindrome") 
                  << std::endl;
    }

    std::cout << "Total palindromes: " << palindrome_count << std::endl;

    return 0;
}
