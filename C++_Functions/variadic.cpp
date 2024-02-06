#include <iostream>
#include <string>

using namespace std;

template <typename T> // this is a template

// to take multiple args in a function we use triple dots (...) called variadic, similer what we see in python args** kerd***.

template <typename X, typename... Args>
void func(X t, Args... args){
    cout << t << endl;
    func(args...);
}

int main(){

    string name = "azeem Khan";

    func(1,2,name);

    return 0;
}
