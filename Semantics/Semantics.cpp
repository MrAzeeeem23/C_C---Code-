#include <iostream>
#include <string>

using namespace std;

// this is a treditional method of swaping the values.
// but is has some optimization issuses, it creates lots of copy of the variable 
// it work perpectly fine but when we are deling with multipe values or with arrays it will take more space.
// to deal with this issue we have to use Move Semantics for example refer the file moveSeman.cpp

void swap(int &a, int &b){

    int temp = a ;
    a = b;
    b = temp;

}

int main(){

    int a = 3;
    int b = 4;

    swap(a , b);

    cout << "A: " << b<< endl;
    return 0;
}