#include <iostream>
#include <string>

using namespace std;

int main(){

    []{cout << "hello world this a lambda function\n " ;}();

    [](){return 100;};

    auto sum = [](auto *a, auto *b){return a + b; };

    cout << "The sum of " << a << " & " << b << " " << sum(3,5) << endl;

    cout << sum(a, b) << endl;



    return 0;
}