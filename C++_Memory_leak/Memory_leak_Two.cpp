#include <iostream>

using namespace std;

int memory_leak_func(){

    int * mypointer;

    mypointer = int(nothrow) new[100];

    delete [] emypointer;

    return 0;
}

int main(){
    
    memory_leak_func()

}