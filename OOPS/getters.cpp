#include <iostream>
#include <string>

using namespace std;

class myuser{
    // we should use underscore at the starting of the name is is considerd to be the best practice.
    int _Secret = 22; // by default it is private 

    public:
    string name = "hello world";
    void func(){
        cout << "print massage: " << name << endl;
    }

    // this is a setter
    void setuser(const int &newscreat){
        _Secret = newscreat;
    }
    // this is getter
    int getuser(){
        return Secret;
    }
};

int main(){
    myuser ankit;
    ankit.name = "ankit";
    ankit.func();
    ankit.setuser(333);

    cout << ankit.getuser() << endl;

    return 0;

}