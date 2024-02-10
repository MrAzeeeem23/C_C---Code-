#include <iostream>

using namespace std;

int memory_leak_func(){

    int * mypointer;

    // ----------treditional method ------------------;

    // mypointer = int(nothrow) new[100];
    // delete [] mypointer; // deletes the memory space.

    // int(nothrow) is a small method to handel exception.

    // ---------- same method with try catch ------------;

    try{
        mypointer = int(nothrow) new[100];
        cout << "Memory should allocated \n";
    }
    catch(...){
        delete [] mypointer;
    }

    return 0;
}

int main(){
    
    memory_leak_func()

}