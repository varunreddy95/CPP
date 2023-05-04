#include <iostream>
#include <cstring> //For c-style string functions
#include <cctype> //got character based functions

int main()
{
    char first_name[20] {};
    char last_name[20] {};
    char full_name[20] {};
    char temp[50] {};

    // std::cout << first_name;  //Will display garbage because not intialized
    // std::cout << "Enter your first name: ";
    // std::cin >> first_name;

    // std::cout << "\nEnter your last name: ";
    // std::cin >> last_name;
    // std::cout << "----------------------------------" << std::endl;

    // std::cout << "Hello " << first_name << " your first name has " << strlen(first_name) << " characters" << std::endl;
    // std::cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters." << std::endl;

    // strcpy(full_name, first_name);
    // strcat(full_name, " ");
    // strcat(full_name, last_name);

    // std::cout << "Your full name is : " << full_name << std::endl;

    std::cout << "Enter your full name: ";
    std::cin.getline(full_name, 50);
    std::cout << "Your full name is " << full_name << std::endl; 

    for(size_t i=0; i<strlen(full_name); ++i)
    {
        if(isalpha(full_name[i]))
        {
            full_name[i] = toupper(full_name[i]);
        }
    }
    std::cout << "\nYour full name is " << full_name << std::endl;

    return 0;
}