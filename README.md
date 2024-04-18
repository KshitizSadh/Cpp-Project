# Encyption/decryption tool using cpp
- This is a simple encryption and decryption tool built using C++ that allows you to encrypt and decrypt text files using the Caesar cipher technique entirely through the command line.

## How to Use
1. *Compile the Code:*
   - Make sure you have a C++ compiler installed on your system. You can use mingw installer to in stall latest version of gcc on your device.
   - Compile the main.cpp file using the compiler of your choice.
    use:
     ```
     bash
      g++ main.cpp -o cipher_tool
     ```
 2. *Encrypt a Text File:*
   - To encrypt a text file, run the following command in the terminal:
```
bash
./cipher_tool encrypt INPUT_FILE OUTPUT_FILE SHIFT
```

   - INPUT_FILE: Path to the text file you want to encrypt.
   - OUTPUT_FILE: Path to the output file where the encrypted text will be saved.
   - SHIFT: Integer value representing the shift for the Caesar cipher encryption.
3. *Decrypt a Text File:*
   - To decrypt an encrypted text file, run the following command in the terminal:
```
bash
./cipher_tool decrypt INPUT_FILE OUTPUT_FILE SHIFT
```
   - INPUT_FILE: Path to the encrypted text file.
   - OUTPUT_FILE: Path to the output file where the decrypted text will be saved.
   - SHIFT: Integer value representing the shift used for encryption.
# Example

- Encrypt a text file plaintext.txt with a shift value of 3:
```
bash
./cipher_tool encrypt plaintext.txt encrypted_text.txt 3
```

- Decrypt the encrypted text file encrypted_text.txt with the same shift value of 3:
```
bash
./cipher_tool decrypt encrypted_text.txt decrypted_text.txt 3
```

## Notes

- The Caesar cipher technique shifts each alphabet in the text by a fixed amount (the key) to encrypt the text.
- Make sure to keep your encryption key secret to ensure the security of your data.
- This tool is for educational purposes and not recommended for secure communications.
