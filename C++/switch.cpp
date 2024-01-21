#include <iostream>

using namespace std;

int main(){

    int my_score = 3;

    switch(my_score){

        case 1:
            puts("hello world");
            break;
        
        case 2:
            puts("your score is 2 \n");
            break;

        case 3:
            puts("your score is 3 \n");
            break;

        case 4:
            puts("your score is 4 \n");
            break;
    
        case 5:
            puts("puts score is 5 \n");
            break;
        
        default:
            puts("this is defualt");
            break;

    }

}