#include <iostream>
#include <string> // this is string header file which i have included.

using namespace std;

int main(){

    string color; // variable declaration.

    cout << "Enter the your fav. color \n"; // \n is a character literal. 
    
    // we can also use << endl; insted of using \n.

    getline(cin, color); // to take input as a string

    cout << "holo " << color << " is my fav. color too \n";

    return 0;
    
}

