#include <iostream>
#include <string>

using namespace std;

int main(){
    string first_name;
    string last_name;
    cout << "Enter your first Name: " << endl;
    getline(cin, first_name);
    cout << "Enter your last Name: \n";
    getline(cin, last_name);

    cout << "welcome " << first_name << " " << last_name << " to Microsoft C++ \n";

    return 0; 
}