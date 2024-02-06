#include <iostream>
#include <string>

using namespace std;

class User{
    int Secret = 20;

public:
    string name = "default";
    void myfunc(){
        cout << "this is a func called from class: " << name << endl;
        }
};

int main(){

    User ajju;
    ajju.name = "azeem Khan";
    ajju.myfunc();


    return 0;
}