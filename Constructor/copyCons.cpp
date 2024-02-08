#include <iostream>
#include <string>

using namespace std;

class user{
    private: int num = 12;

    public:
    string name = "defualt";
    string Email = "Email@.com";

    void setnum(const int & n){
        num = n;
    }

    int getnum(){
        return num;
    }
};

int main(){
    user azeem;
    azeem.name = "azeemKhan";
    azeem.Email = "azeem@gmail.com";
    azeem.setnum(55);

    cout << azeem.name << endl;
    cout << azeem.Email << endl;
    cout << azeem.getnum() << endl;

    user ankit;
    ankit = azeem;

    cout << ankit.name << endl; // copy constructor is used involked

    return 0;

}