#include "encryption.h"
#include <fstream>
#include <cctype>

using namespace std;

bool performMagic(string &content, bool encrypt) {
    int shift = encrypt ? 4 : -4;

    for (char &ch : content) {
        if (isalpha(ch)) {
            char base = isupper(ch) ? 'A' : 'a';
            ch = static_cast<char>((ch - base + shift + 26) % 26 + base);
        }
    }

    return true;
}

bool encryptFile(const string &filename, bool encrypt) {
    ifstream inFile(filename);
    if (!inFile) {
        return false;
    }

    string content((istreambuf_iterator<char>(inFile)), {});
    inFile.close();

    if (performMagic(content, encrypt)) {
        ofstream outFile(encrypt ? "Encrypted_" + filename : "Decrypted_" + filename);
        if (!outFile) {
            return false;
        }

        outFile << content;
        outFile.close();

        return true;
    }

    return false;
}
