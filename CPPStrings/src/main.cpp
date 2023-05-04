#include <iostream>
#include <string>


int main()
{
    // std::string s0;
    // std::string s1 {"Apple"};
    // std::string s2 {"Banana"};
    // std::string s3 {"Kiwi"};
    // std::string s4 {"apple"};
    // std::string s5 {s1};
    // std::string s6 {s1, 0, 3}; //App
    // std::string s7 {10, 'X'}; //XXXXXXXXXX


    // // std::cout << s0 << std::endl;   //No garbage value
    // // std::cout << s0.length() << std::endl;   // length 0

    // //Initialization
    // std::cout << "-------------------------------------" << std::endl;
    // std::cout << "s1 is initialized to: " << s1 << std::endl;
    // std::cout << "s2 is initialized to: " << s2 << std::endl;
    // std::cout << "s3 is initialized to: " << s3 << std::endl;
    // std::cout << "s4 is initialized to: " << s4 << std::endl;
    // std::cout << "s5 is initialized to: " << s5 << std::endl;
    // std::cout << "s6 is initialized to: " << s6 << std::endl;
    // std::cout << "s7 is initialized to: " << s7 << std::endl;

    // //Operators of string class
    // std::cout << (s1 == s2) << std::endl;
    // std::cout << (s1 != s2) << std::endl;
    // std::cout << (s1 < s2) << std::endl;
    // std::cout << (s1 > "apple") << std::endl;

    // // Concatenation
    // std::cout << s1 + " " + s2 << std::endl;


    // // getline
    // std::string fullname {};

    // std::cout << "Enter your full name: ";
    // std::getline(std::cin, fullname);

    // std::cout << fullname << std::endl;

    // //Find
    // std::string sentence = "The secret word is Boo";

    // std::string word {};
    // std::cout << "Enter the word to find: ";
    // std::cin >> word;

    // size_t position = sentence.find(word);
    // if(position != std::string::npos)
    // {
    //     std::cout << "The word was found at: " << position << std::endl;
    // }
    // else
    // {
    //     std::cout << "The word wasn't found" << std::endl;
    // }

    std::string alphabets {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ "};
    std::string key {"ZYXWVUTSRQPONMLKJIHGFEDCBAZzyxwvutsrqponmlkjihgfedcba "};

    std::string secret_message {};
    std::cout << "Enter you secret message to be transmitted : ";
    std::getline(std::cin, secret_message);

    std::string encrypted_message {secret_message};
    

// Encryption
    for(size_t i=0; i < secret_message.length(); i++)
    {
        int pos = alphabets.find(secret_message[i]);
        encrypted_message.at(i) = key[pos];
    }

    std::cout << "Encrypted message: " << encrypted_message << std::endl;

    std::string decrypted_message {encrypted_message};    

// Decryption
    for(size_t i=0; i < encrypted_message.length(); i++)
    {
        int e_pos = key.find(encrypted_message[i]);
        decrypted_message.at(i) = alphabets[e_pos];
    }

    std::cout << "Decrypted Message: " << decrypted_message << std::endl;

    return 0;
}