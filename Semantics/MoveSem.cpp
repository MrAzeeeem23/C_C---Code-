#include <iostream>
#include <string>

using namespace std;

// This is a optimized approch. or memory optimization

void swap(int &a, int &b){

    int temp = move(a) ;
    a = move(b);
    b = move(temp);

}

// Method.
string printme(){
    return "I am print me";
}

int main(){

    int a = 3;
    int b = 4;

    swap(a , b);

    cout << "A: " << a << endl;
    cout << "B: " << b << endl;

    // this method works fine but have two refrences means it is storing a running function inside a variable.
    string s = printme(); // copy of the method

    // this is a more optimized apporch, beacuse we use move samantic type like thing (&&), which is directly taking refrence from the 'printme' method.

    string&& ss = printme(); // direct refrence.



    return 0;
}