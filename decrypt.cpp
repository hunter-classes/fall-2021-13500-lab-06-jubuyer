#include <iostream>
#include <string>
#include <cctype>
#include "decrypt.h"

std::string decryptCaesar(std::string ciphertext, int rshift) {
  for (int i = 0; i < ciphertext.length(); i++) {
    ciphertext[i] = shiftCaesarChar(ciphertext[i], rshift);
  }
  return ciphertext;
}

std::string decryptVigenere(std::string ciphertext, std::string keyword) {
  return ciphertext;
}

char shiftCaesarChar(char c, int rshift) {
  char output = c;
  if (!isalpha(c)) { //return the same character if it is not a letter
    return output;
  }
  if (isalpha(c)) {
    if (isupper(c)) { //Range of A-Z is 65(A) to 90(Z)
      if ((c - rshift) < 65) { //if out of bounds
        output = 'A' + (c - rshift - 65 + 26); //add 26?
      } else {
        output = c - rshift;
      }
    } else if (islower(c)) { //Range of a-z is 97(a) to 122(z)
      if ((c - rshift) < 97) { //if out of bounds
        output = 'a' + (c - rshift - 97 + 26);
      } else {
        output = c - rshift;
      }
    }
  }
  return output;
}

//Testing Purposes
// int main () {
//   std::cout << decryptCaesar("Bfd yt Lt!",5) << "\n";
//   std::cout << decryptCaesar("Q t!Sm bw kWlm ivl a@g tqma",8) << "\n";
//
//   return 0;
// }
