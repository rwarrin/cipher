#include "crypt.h"

// Encrypt a string by shifting each letter 'shift' amount.
void Encrypt(std::string &text, int shift) {
    using namespace std;
    int length = text.length();
    for(int i = 0; i < length; i++) {
        if(text[i] >= 'A' && text[i] <= 'Z')
            text[i] = (text[i] + shift > 'Z') ? (text[i] + shift) - 26 : (text[i] + shift);
        else if(text[i] >= 'a' && text[i] <= 'z')
            text[i] = (text[i] + shift > 'z') ? (text[i] + shift) - 26 : (text[i] + shift);
    }
}

// Decrypt a string by shifting each letter '-shift' amount.
void Decrypt(std::string &text, int shift) {
    using namespace std;
    int length = text.length();
    for(int i = 0; i < length; i++) {
        if(text[i] >= 'A' && text[i] <= 'Z')
            text[i] = (text[i] - shift < 'A') ? (text[i] - shift) + 26 : (text[i] - shift);
        else if(text[i] >= 'a' && text[i] <= 'z')
            text[i] = (text[i] - shift < 'a') ? (text[i] - shift) + 26 : (text[i] - shift);
    }
}
