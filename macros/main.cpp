#include <iostream>

using namespace std;

void printparsi(int array[]){

    int length = sizeof(array);
    for(int i = 0; i < length; i++){
        for(int j = 0; j < length; j++){
            cout << array[i] << ", " << array[j] << endl;
        }
    }
}

int main(){
    int myarray[] = {1,2,3,4};

    printparsi(myarray);

    return 0;
}