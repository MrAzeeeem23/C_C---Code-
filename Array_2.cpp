#include <iostream>

using namespace std;

int main(){
    int array_one[4];

    array_one[0] = 10;
    array_one[1] = 20;
    array_one[2] = 30;

    cout << "first element " << array_one[0] << endl;

    *array_one = 12;

    cout << "first element " << array_one[0] << endl;

    cout << "second element " << array_one[1] << endl;

    int *ap = array_one;
    ap+=2;

    *ap = 299;

    cout << "first element " << array_one[0] << endl;
    cout << "second element " << array_one[1] << endl;
    cout << "third element " << array_one[2] << endl;

    return 0;
}