/******************************************************************************
 * cipher.cpp
 *
 * Rick W
 * 02/12/2012
 *
 * Encrypts/Decrypts a string of text by shifting letters 'shift' amount.
 *
 *****************************************************************************/

#include <iostream>
#include <string>
#include <stdlib.h>

// Encrypt a string
// text: string to be encrypted
// shift: amount to shift letters by
void Encrypt(std::string &text, int shift);

// Decrypt a string
// text: string to be decrypted
// shift: amount to shift letters by
void Decrypt(std::string &text, int shift);

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

// Encrypt a string by shifting each letter 'shift' amount.
void Encrypt(std::string &text, int shift) {
    using namespace std;
    for(int i = 0; i < text.length(); i++) {
        if(text[i] >= 'A' && text[i] <= 'Z')
            text[i] = (text[i] + shift > 'Z') ? (text[i] + shift) - 26 : (text[i] + shift);
        else if(text[i] >= 'a' && text[i] <= 'z')
            text[i] = (text[i] + shift > 'z') ? (text[i] + shift) - 26 : (text[i] + shift);
    }
}

// Decrypt a string by shifting each letter '-shift' amount.
void Decrypt(std::string &text, int shift) {
    using namespace std;
    for(int i = 0; i < text.length(); i++) {
        if(text[i] >= 'A' && text[i] <= 'Z')
            text[i] = (text[i] - shift < 'A') ? (text[i] - shift) + 26 : (text[i] - shift);
        else if(text[i] >= 'a' && text[i] <= 'z')
            text[i] = (text[i] - shift < 'a') ? (text[i] - shift) + 26 : (text[i] - shift);
    }
}
