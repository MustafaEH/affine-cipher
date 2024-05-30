#How It Works
The Affine Cipher uses the following formula for encryption:

𝐸(𝑥)=(𝑎⋅𝑥+𝑏)mod
 
For decryption, it uses:

D(x)=a^-1⋅(x−b)mod m

Where:

E(x) is the encrypted character.
D(x) is the decrypted character.
a (key1) and b (key2) are keys used for encryption.
a^−1(key3) is the modular multiplicative inverse of a modulo m.
x is the numerical equivalent of the plaintext character.
m is the size of the alphabet (for English, m=26).

#Notes
Key1 and Key3 must be chosen such that they are coprime with 26 for the modular inverse to exist.
The program handles only uppercase English letters and ignores spaces and non-alphabet characters.
License
This project is licensed under the MIT License - see the LICENSE file for details.

Contributing
Contributions are welcome! Please fork the repository and submit a pull request for any improvements or bug fixes.
