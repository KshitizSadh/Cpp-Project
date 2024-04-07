#include <iostream>
#include "encryption.h"

using namespace std;

int main() {
    string filename;
    char Mode;

    cout << "ENTER THE FILE NAME: ";
    getline(cin >> ws, filename);

    cout << "Encrypt (E) or Decrypt (D)? ";
    cin >> Mode;

    if (Mode == 'e' || Mode == 'E') {
        if (encryptFile(filename, true)) {
            cout << "Encryption completed successfully." << endl;
        } else {
            cerr << "Error: Unable to perform encryption.";
        }
    } else if (Mode == 'D' || Mode == 'd') {
        if (encryptFile(filename, false)) {
            cout << "Decryption completed successfully." << endl;
        } else {
            cerr << "Error: Unable to perform decryption.";
        }
    } else {
        cerr << "Error: Invalid mode selection. Use 'E' for encryption or 'D' for decryption." << endl;
    }

    return 0;
}
