#include <iostream>

using namespace std;

int factorial(int n);

int factorial(int n){
    if(n == 1){
        return 1;
    }else{
        return n * factorial(n - 1);
    }
}
int main(){
    cout << "Enter the number" << endl;
    int n;
    cin >> n;

    cout << factorial(n) << endl;

    return 0;
}
