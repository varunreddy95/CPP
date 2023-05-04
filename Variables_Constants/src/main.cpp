#include <iostream>

// The program will calculate the area of the room in swaure feet
int main()
{
    // Causes warnings -> Always take warnings seriously and fix them

    // int age_uninit; //Un-initialzied variables
    // std::cout << age_uninit << std::endl;

    // Always initialize variables during declaration, even it they are user inputs
    // Calculat the area of room with user inputs



    std::cout << "Please enter the width and length of the room :" ;
    int room_width {0};    // Declare variables jsut before using them, easy to read the code
    int room_length {0};
    std::cin >> room_width >> room_length;

    double area = room_length * room_width;
    std::cout << "Area of the room: " << area << std::endl;

    /*
    ****** Constants ************
    If the values are constants they never change
    Types of Contants (Typed Contants)
        1. Literal Constants (12, 1.56, Varun)
        2. Declared Constants (const keyword)
        3. Constant expressions (constexpr keyword)
        4. Enumerated Constants (enum keyword)
        5. Defined Constants (#define) -> Don't use defined constants in modern C++
    */
    return 0;
}