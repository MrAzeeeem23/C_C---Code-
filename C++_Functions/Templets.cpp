#include <iostream>

using namespace std;

// Template can take any Data type and retrun it.
// does not need for define different methods or functions with any return type
template <typename T> // We can use any name, Insted of T or what ever.

// we have to difine that templet name in return type of the method. and also in parameters.
T multnum(T a, T b){ 
    return a * b;
}

int main(){
    int v1 = 5;
    int v2 = 12;

    float v3 = 2.3;
    float v4 = 8.2;

    cout << multnum(v1 , v2) << endl;
    cout << multnum(v3 , v4) << endl;

    return 0;
}
