// Pointer :- pointer point's at memory address.

#include <iostream>

using namespace std;

int main(){

    int score = 200;

    int *mypointer = &score; // "*" this sign is used to declaer a pointer, we can use any name.

    // "&" this sign is used for referece of any variable which should me declaer at least once.

    /*
    -----------WARNING-----------

    - The "&" referece can change the value of variable.
    - while changing the refrence of the variable it will not change the memory address.
    
    */

    printf("Value of score: %d\n" , score);
    printf("Value of Pointer: %p\n" , mypointer); // we have to use %p to format pointer 

    return 0;

}