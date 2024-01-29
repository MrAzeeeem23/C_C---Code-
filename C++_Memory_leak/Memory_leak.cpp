#include <iostream>

using namespace std;

int memory_leak_sim(){
    int * mypointer;

    mypointer = new int[100];// memory is allocated but not deleted in this method

    cout << "Memory allocated \n";

    return;

}

int main(){

    // memory leak
    memory_leak_sim();
}