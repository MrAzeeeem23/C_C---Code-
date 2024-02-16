#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    int myarr[6] = {2,5,3,1,0,3};

    cout << "UNSORTED VALUES \n";
    for (int i : myarr){
        cout << myarr[i] << " ";
    }

    cout << endl;

    sort(myarr, myarr+6);

    cout << "SORTED VALUES \n";
    for (int i : myarr){
        cout << myarr[i] << " ";
    }

    cout << endl;
    cout << endl;

    if(binary_search(myarr , myarr+6 , 2)){
        cout << "Number is found" << endl;
    }else{
        cout << "Number is not found" << endl;
    }
    

    return 0;
}