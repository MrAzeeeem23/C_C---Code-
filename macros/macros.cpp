#include <iostream>
#include <string>

using namespace std;

#define end return 0
#define console_log(a) cout << a << endl;
#define MyINT int32_t
#define PI 3.14159

double circle(){
    double radius = 5.0;
    double area = PI * radius * radius;

    console_log(area);

    end;
}

int main(){

    MyINT x = 329;

    int score = 55;
    cout << score << endl;

    string name = "hello world";

    console_log(name);
    console_log(x);

    circle();

    end;
}

/*
In C++, a macro is a text replacement mechanism that operates before the actual compilation process. You define a macro using the #define preprocessor directive, giving it a name and a value. Whenever the preprocessor encounters the macro name in your code, it replaces it with the defined value before the code is compiled.
*/