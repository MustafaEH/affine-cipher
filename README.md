# **Affine Cipher**

This C++ program implements the Affine Cipher for encrypting and decrypting messages. The Affine Cipher is a type of monoalphabetic substitution cipher that uses a mathematical function to encrypt and decrypt messages.

## **Features**

- **Encryption**: Encrypts a message using the Affine Cipher with user-provided keys.
- **Decryption**: Decrypts a message using the Affine Cipher with user-provided keys.
- **Input Validation**: Ensures that the keys and options provided by the user are valid.

## **Requirements**

- A C++ compiler (e.g., GCC, Clang)
- C++11 or later

## **How to Use**

1. **Clone the repository**:
    ```sh
    git clone https://github.com/yourusername/affine-cipher.git
    cd affine-cipher
    ```

2. **Compile the program**:
    ```sh
    g++ -o affine_cipher affine_cipher.cpp
    ```

3. **Run the program**:
    ```sh
    ./affine_cipher
    ```

4. **Follow the on-screen prompts**:
    - Enter the message you wish to encrypt or decrypt.
    - Enter the keys (key1, key2, key3) as prompted. Ensure that the keys are positive integers.
    - Choose whether to encrypt or decrypt the message.
    - To exit the program, press 'e' or 'E'. Press any other key to run the program again.

## **Example Usage**

```text
Please enter your message: HELLO WORLD

Please enter key1: 5
Please enter key2: 8
Please enter key3: 21

Please choose an option:
1 = Encrypt the message
2 = Decrypt the message
1

Your encrypted message: RCLLA QXLYA

To exit the program, press ('e' or 'E') or press any character to try again:
