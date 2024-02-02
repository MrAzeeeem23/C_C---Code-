#include <iostream>

using namespace std;

int main(){
    bool entering[2];
    int number[2];

    int myfunc(int n){
        entering = new bool[n];
        number = new int[n];

        for(int i = 0; i < n; i++){
            entering[i] = false;
            number[i] = 0;

        }
    }

    myfunc(10);


}