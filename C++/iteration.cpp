#include <iostream>

using namespace std;

int main(){

    int num = 1;

    for(int i = 0; i < 10; i++){
        cout << "print 10 times " << i << endl;
    }

    while(num <= 5){
        cout << "print hello again \n" ;
        num++; 
    }

    do{
        cout << "hello world" << endl;
        num++;
    }while(num <= 5); // may aceess illigal memory;
}