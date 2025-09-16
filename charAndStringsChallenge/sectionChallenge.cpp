#include <iostream>
#include <string>
using namespace std;

/*
A simple and very old method of sending secret messages is the substitution cipher.
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.

Write a program thats ask a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted message.
Then decryped the encrypted message back to the original message.

You may use the 2 strings below for  your subsitition.
For example, to encrypt you can replace the character at position n in alphabet 
with the character at position n in key.

To decrypt you can replace the character at position n in key
with the character at position n in alphabet.

Have fun! And make the cipher stronger if you wish!
Currently the cipher only substitutes letters - you could easily add digits, puncuation, whitespace and so
forth. Also, currently the cipher always substitues a lowercase letter with an uppercase letter and vice-versa.
This could also be improved.

Remember, the less code you write the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!
*/

int main(){

    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string userInput{};
    cout << "Enter secret message: ";
    getline(cin, userInput);

    string encMessage{};

    cout << "\nEncrypting message..." << endl;

    for(auto letter : userInput){
        size_t i = alphabet.find(letter);
        if(i != string::npos){
            encMessage += key[i];
        }else if(letter == ' '){
            encMessage += '*';
        }else{
            encMessage += letter;
        }
    }

    cout << "The encrypted message is: " << encMessage << endl;

    cout << "\nDecrypting message..." << endl;

    string dencMessage{};

    for(auto letter : encMessage){
        size_t i = key.find(letter);
        if(i != string::npos){
            dencMessage += alphabet[i];
        }else if(letter == '*'){
            dencMessage += ' ';
        }else{
            dencMessage += letter;
        }
    }

    cout << "The dencrypted message is: " << dencMessage << endl;

    return 0;
}