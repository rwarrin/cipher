/******************************************************************************
 * cipher.cpp
 *
 * Rick W
 * 02/12/2012
 *
 * Encrypts/Decrypts a string of text by shifting letters 'shift' amount.
 *
 *****************************************************************************/

#include "crypt.h"

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

    // check direction
    int direction = 0;
    if(strcmp(argv[1], "-e") == 0)
        direction = 1;
    else if(strcmp(argv[1], "-d") == 0)
        direction = -1;
    else {
        cout << "Invalid direction.\n";
        return 2;
    }

    // convert shift amount to an integer
    int shift = atoi(argv[2]);
    
    // get string to encrypt
    string text;
    cout << "> ";
    getline(cin, text);

    if(direction == 1)
        Encrypt(text, shift);
    else  // if(direction == -1)
        Decrypt(text, shift);

    cout << text << endl;

    return 0;
}

