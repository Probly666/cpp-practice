/*5. Phone Book Search — array of structures + string functions
Declare a structure Contact with members string name and string phone. Read n (1 to 50) and
an array of n contacts (names and phones without spaces). Write a function string toLower(string s),
which returns the string in lower case.
Read a query and print all contacts whose name contains the query, ignoring the case of letters
(use find and compare the result with string::npos). Print the number of found contacts, or No contacts
found.*/



#include <iostream>
using namespace std;
struct Contact{
    string name;
    string phone;
};
string toLower(string s){
    for (char& ch : s) {
        ch = static_cast<char>(std::tolower(static_cast<unsigned char>(ch)));
    }
    return s;
}
int main(){
    int n=0;
    cin>>n;
    Contact contacts[50];
    for(int i =0 ;i<n;i++){
        cout<<"enter your name:";
        cin>>contacts[i].name;
        cout<<"enter your phone:";
        cin>>contacts[i].phone;

    }
    std::string query;
    std::cout << "Enter query: ";
    std::cin >> query;

    std::string query_lower = toLower(query);
    int found_count = 0;

    for (const auto& contact : contacts) {
        std::string name_lower = toLower(contact.name);

        if (name_lower.find(query_lower) != std::string::npos) {
            std::cout << contact.name << " " << contact.phone << "\n";
            found_count++;
        }
    }

    if (found_count > 0) {
        std::cout << "Found contacts: " << found_count << "\n";
    } else {
        std::cout << "No contacts found\n";
    }

    return 0;

}
