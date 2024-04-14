#include  "encryption.h"
#include <fstream>
#include <cctype>
#include <iostream>

using namespace std;

bool performmagic(string& content, bool encrypt) {
    int a;
    int shift = encrypt ? a : -a;
    cout<<"what is shift value";
    cin >> a;

    for(char& ch: content) {
        if (isalpha(ch)) {
            char base = isupper(ch) ? 'A' : 'a';
            ch = static_cast<char>((ch - base + shift + 26) % 26 + base);
        }
    }

    return true;
}

bool encryptfile(const string& filename, bool encrypt) {
    //open the file
    ifstream inFile(filename);
    if(inFile) {
        return false;
    }
    // read the content of the file 
    string content((istreambuf_iterator<char>(inFile)), {});
    inFile.close();

    if(performmagic(content,encrypt)) {
        //creatingg output file and writing the modufied content
        ofstream outfile(encrypt ? "encrpyted_" + filename : "decrypted_" + filename);
        if(outfile) {
            return false;
        }

        outfile << content; 

        outfile.close();

        return true; 
    }
}
