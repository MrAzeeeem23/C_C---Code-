#include <iostream>

using namespace std;

int addtion(int a, int b){
    return a + b ;
}

float addtion(float a, float b){
    return a + b;
}

int main(){
    int v1 = 5;
    int v2 = 3;

    float v3 = 5.5;
    float v4 = 9.3;

    cout << addtion(v4, v3) << endl;
}

// C++ COMPILER IS VARY SMART, IT WILL UNDER STAND AUTOMATIC WHEN SHOULD WHICH FUNCTION SHOULD EXECUTE!
// WE CAN CREATE DIFFERENT METHOD FUNCTIONS WITH SAME NAME 