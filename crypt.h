#ifndef CRYPT_H
#define CRYPT_H

#include <iostream>
#include <string>

// Encrypt a string
// text: string to be encrypted
// shift: amount to shift letters by
void Encrypt(std::string &text, int shift);

// Decrypt a string
// text: string to be decrypted
// shift: amount to shift letters by
void Decrypt(std::string &text, int shift);


#endif  // CRYPT_H

