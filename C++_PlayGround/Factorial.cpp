#include <iostream>

using namespace std;

int factorial(int n);

int main(){
    factorial(5);
    
    cout << factorial(5) << endl;
    return 0;
} 

int factorial(int n){
    if(n == 0){
        return 1;
    }else{
        return n * factorial(n - 1);
    }
}
