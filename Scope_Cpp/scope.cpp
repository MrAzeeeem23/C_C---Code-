#include <iostream>

using namespace std;

int my_life(){
    static int score = 3;
    return score = score + 1;
    // return ++score; prefix incrimented first
    // retunr score++; postfix 
}

int main(){
    int score = 3;
    cout << "your score is: " << score << endl;

    score = my_life();
    printf("Now your score is: %d\n", score);
        
    score = my_life();
    printf("Now your score is: %d\n", score);    

    score = my_life();
    printf("Now your score is: %d\n", score);

    return 0;
}