#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    vector<int> nums;

    vector<string> Heros = {"iron man", "Spider man", "thor" , "Captain America", "joker"};

    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(8);
    nums.push_back(9);

    cout << nums.size() << endl << nums.capacity() << endl << nums.max_size() << endl;

    cout << nums.empty() << endl;

    for(auto i = begin(nums); i <= end(nums); ++i){
        cout << *i << " ";
    }

    return 0;
}