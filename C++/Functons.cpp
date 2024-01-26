#include <iostream>

using namespace std;

void func(){
    cout << "print something \n";
}

static fun_two(){
    cout << "this is a second funtion without void";
}

int main(){
    cout << "writting a function \n";

    fun_two();
}
