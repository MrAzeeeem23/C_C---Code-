#include <iostream>

using namespace std;

int getTwo(){
    return 2;
}

void my_function(){
    puts("hello i am a function");
}

int main(){
    int run_func = getTwo();
    // int run_func = this_is_a_function
    // () this is used only to call the function.
    // in case we dont use it will not going to call it.

    void (*points_to_my_function)() = my_function; /*if the return type of func is void,int,float etc
    it should be same when defining the pointer */

    // if we set a void pointer to the function name it will take the refrence of it.

    cout << run_func << endl;
    points_to_my_function();
    (*points_to_my_function)();

    // above both methods are leagal

    // this_is_a_function();

    return 0;


}