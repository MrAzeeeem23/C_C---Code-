#include <iostream>

using namespace std;

// void my_func(int score){
//     ++score;
// }


// int main(){
//     int score = 5;
//     my_func(score);
//     cout << score << endl;

//     return 0;
// } // OUTPUT OF THIS CODE WILL BE '5'

void my_second_func(int *level){
    ++(*level);
}

int main(){
    int level = 5;
    my_second_func(&level);
    cout << level << endl;

    return 0;
    // OUTPUT OF THIS CODE WILL BE "6" it uses pointers and refrences
}

