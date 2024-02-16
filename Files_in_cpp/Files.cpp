#include <iostream>
#include <string>

using namespace std;

int main(){

    static const char * originalFile = "OriginamFile.txt";
    static const char * EditedFile = "EditedFile.txt";

    remove(EditedFile); // to remove the file

    // rename(originalFile , EditedFile); // to rename the exixting file.

    // FILE * fn = fopen(originalFile, "w");
    // fclose(fn);

    // "w" stands for write.
    // "r" stands for read.
    // "a" stands for append.

    cout << "hello world" << endl;
    return 0;
}