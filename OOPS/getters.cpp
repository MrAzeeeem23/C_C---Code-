#include <iostream>
#include <string>

using namespace std;

class myuser{
    int Secret = 22; // by default it is private 

    public:
    string name = "hello world";
    void func(){
        cout << "print massage: " << name << endl;
    }

    // this is a setter
    void setuser(const int &newscreat){
        Secret = newscreat;
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