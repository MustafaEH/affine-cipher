#include <iostream>
#include <string>
using namespace std;


int main() {

    string exit;
    exit = true;
    while (exit != "e" && exit != "E")     
    {
        string message;
        int key1, key2, key3, x;


        cout << "\nplease enter your message: " ;
        getline(cin >> ws, message);
        
                
        cout << "\nplease enter key1: ";
        cin >> key1;
        if(cin.fail()) {
            cout << "Invalid input for Key1.";
            cout << "\nOoops it seems you did something wrong, please try again.\n";            
            return 0 ;
        }
        
        while(key1 <= 0)
        {
            cout << "\nplease enter positive key1: ";
            cin >> key1;
        }
        

        cout << "\nplease enter key2: ";
        cin >> key2;
        if (cin.fail()) {
            cout << "Invalid input for Key2";
            cout << "\nOoops it seems you did something wrong, please try again.\n";
            return 0;
        }
        while (key2 <= 0)
        {
            cout << "\nplease enter positive key2: ";
            cin >> key2;
        }

        cout << "\nplease enter key3: ";
        cin >> key3;
        if (cin.fail()) {
            cout << "Invalid input for Key3.";
            cout << "\nOoops it seems you did something wrong, please try again.\n";
            return 0;
        }
        while (key3 <= 0)
        {
            cout << "\nplease enter positive key3: ";
            cin >> key3;
        }
        

        cout << "\nplease choose following option:\n";
        cout << "1 = Encrypt the string.\n";
        cout << "2 = Decrypt the string.\n";
        cin >> x;

        switch (x)
        {
        case 1:

            for (int i = 0; i != message.size(); i++)
                if (message[i] != char(32)) {    
                        message[i] = char((key1 * (toupper(message[i]) - 65) + key2) % 26 + 65); 
                }                
                else
                {
                    continue;
                }

            cout << "your message encrypted : " << message;
            break;


        case 2:

            while ((key3 * key1) % 26 != 1) {
            cout << "\nplease enter right value for key3 : ";
            cin >> key3;
            }
            for (int i = 0; i != message.size(); i++)

                if (message[i] != char(32)) {
                    if ((key3 * key1) % 26 == 1){
                        message[i] = char(((key3 * ((toupper(message[i]) - 65) - key2)) % 26 + 26) % 26 + 65); } //modulus of -ve numbers
                }
                else
                {
                    continue;
                }

            cout << "your message decrypted : " << message;
            break;

        default:
            cout << "Invalid Input!!";
            break;
        }

        cout << "\nto exit from the program , press ( \'e\' or \'E\' ) or press any character to try again : \n";
        cin >> exit;
    }
    cout << "\nThanks for using affine cipher hope you enjoy it.\n";
        return 0;    
}
