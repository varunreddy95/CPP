#include <iostream>
#include <cmath>
#include <cstdlib>   //required for rand(), for precise distributions use <random> header file
#include <ctime>  // required for time()


double cal_area_circle(double radius)
{
    const double pi {3.14159};
    return (pi * radius * radius);
}



void area_circle()
{
    double radius {};
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    std::cout << "The area of a circle with radius " << " is " << cal_area_circle(radius) << std::endl;
}


double calc_volume_cylinder (double radius, double height)
{
    return (cal_area_circle(radius) * height);
}



void volume_cylinder()
{
    double radius {};
    double height {};
    
    std::cout << "Enter the radius of the cylinder: ";
    std::cin >> radius;

    std::cout << "Enter the height of the cylinder: ";
    std::cin >> height;

    std::cout << "The area of cylinder with radius " << radius << " and " << " height " << height << " is: " << calc_volume_cylinder(radius, height) << std::endl;
}

int main()
{
    // double num {0};
    // std::cout << "Enter a number (double): ";
    // std::cin >> num;

    // std::cout << "The sqrt of " << num << " is " << sqrt(num) << std::endl;
    // std::cout << "The cubed root of " << num << " is " << cbrt(num) << std::endl;

    // std::cout << "The sine of " << num << " is " << sin(num) << std::endl;
    // std::cout << "The cosine of " << num << " is " << cos(num) << std::endl;

    // std::cout << "The ceil of " << num << " is " << ceil(num) << std::endl;
    // std::cout << "The floor of " << num << " is " << floor(num) << std::endl;
    // std::cout << "The round of " << num << " is " << round(num) << std::endl;


    // double power {};
    // std::cout << "\nEnter a pwer to raise "<< num << " to: ";
    // std::cin >> power;
    // std::cout << num << " raised to the " << power << " power is " << pow(num, power) << std::endl;

    // int random_number {0};
    // size_t count {10};  //Number of random numbers to generate
    // int min {1}; // Lower bound inclusive
    // int max {6}; //upper bound inclusive

    // //seed the random number generator
    // std::cout << "RAND_MAX on my system is: " << RAND_MAX << std::endl;
    // srand(time(nullptr));

    // for(size_t i=1; i <= count; ++i)
    // {
    //     random_number = rand() % max + min;
    //     std::cout << random_number << std::endl;
    // }

    // std::cout << std::endl;


    //functions calls

    area_circle();
    
    std::cout << std::endl;

    volume_cylinder();


    return 0;
}