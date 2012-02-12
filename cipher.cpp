/******************************************************************************
 * cipher.cpp
 *
 * Rick W
 * 02/12/2012
 *
 * Encrypts a string of text by shifting letters 'shift' amount.
 *
 *****************************************************************************/

#include <iostream>
#include <string>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    using namespace std;

    // check arguments
    if(argc != 3) {
        cout << "Not enough arguments.\n./cipher -direction <shift amount>\n";
        cout << "-direction\n\t-e: Encrypt\n\t-d: Decrypt\n";
        return 1;
    }

    if(strcmp(argv[1], "-e") == 0)
        cout << "Encrypt\n";
    else if(strcmp(argv[1], "-d") == 0)
        cout << "Decrypt\n";
    else {
        cout << "Invalid direction.\n";
        return 2;
    }

    return 0;
}
