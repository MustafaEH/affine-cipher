# affine-cipher
How It Works
The Affine Cipher uses the following formula for encryption:

𝐸
(
𝑥
)
=
(
𝑎
⋅
𝑥
+
𝑏
)
m
o
d
 
 
𝑚
E(x)=(a⋅x+b)modm

For decryption, it uses:

𝐷
(
𝑥
)
=
𝑎
−
1
⋅
(
𝑥
−
𝑏
)
m
o
d
 
 
𝑚
D(x)=a 
−1
 ⋅(x−b)modm

Where:

𝐸
(
𝑥
)
E(x) is the encrypted character.
𝐷
(
𝑥
)
D(x) is the decrypted character.
𝑎
a (key1) and 
𝑏
b (key2) are keys used for encryption.
𝑎
−
1
a 
−1
  (key3) is the modular multiplicative inverse of 
𝑎
a modulo 
𝑚
m.
𝑥
x is the numerical equivalent of the plaintext character.
𝑚
m is the size of the alphabet (for English, 
𝑚
=
26
m=26).
Notes
Key1 and Key3 must be chosen such that they are coprime with 26 for the modular inverse to exist.
The program handles only uppercase English letters and ignores spaces and non-alphabet characters.
License
This project is licensed under the MIT License - see the LICENSE file for details.

Contributing
Contributions are welcome! Please fork the repository and submit a pull request for any improvements or bug fixes.
