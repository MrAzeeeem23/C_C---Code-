#include <iostream>

using namespace std;

int main(){
    int nums = 23;

    if (nums % 2 == 0)
    {
        cout << "number is even" << endl;
    }
    else if (nums % 2 != 0){
        cout << "number is Odd" << endl;
    }
    else{
        cout << "The number is nagative" << endl;
    }

    int second_number = 55;

    printf("Your rating is %s" , second_number < 100 ? "true" : "false"); // ternary operation (%s)
    
}