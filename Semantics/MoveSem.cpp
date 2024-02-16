#include <iostream>
#include <string>

using namespace std;

// This is a optimized approch.

void swap(int &a, int &b){

    int temp = move(a) ;
    a = move(b);
    b = move(temp);

}

int main(){

    int a = 3;
    int b = 4;

    swap(a , b);

    cout << "A: " << a << endl;
    cout << "B: " << b << endl;
    return 0;
}