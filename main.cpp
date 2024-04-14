#include<iostream> 
#include "encryption.h"

using namespace std;

int main() {

    string filename;
    char mode;

    cout<<"Enter The Filename: ";
    getline(cin >> ws, filename);

    cout<< "Encrypt(e) or Decrypt(d)? ";
    cin>> mode;

    if(mode == 'e'||mode == 'E') {
        if(encryptfile(filename, true)) {
            cout << "Encryption completed succesfully." <<endl;
        } else{
            cerr << "error unable to perform encryption" << endl;
        }
    } else if (mode == 'd' || mode == 'D') {
        if(encryptfile(filename, false))  {
            cout << "Cecryption complete succesfully." << endl;
        } else{
            cerr << "error : Unable to perform ecryption. " << endl;
        }
    } else {
        cerr << "Error: Invalid mode selection. Use 'e' for encryption or 'd' for  decryption. " << endl;
    }

    return 0;
}
