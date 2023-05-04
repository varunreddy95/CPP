#include <iostream>

/*
    The size of operator receives the information about integral numbers from climits and similarly floating point numbers receive from cfloat
*/

#include <climits>
#include <cfloat>

int main()
{
    /*
        Printing the size information of integral numbers
    */

   std::cout << "******************** Integral Numbers ************************" << std::endl;


   std::cout << "short int : " << sizeof(short int) << " bytes" << std::endl;
   std::cout << "int : " << sizeof(int) << " bytes" << std::endl;
   std::cout << "unsigned int : " << sizeof(unsigned int) << " bytes" << std::endl;
   std::cout << "long int :" << sizeof(long int) << " bytes" << std::endl;
   std::cout << "long long int :" << sizeof(long long int) << "  bytes" << std::endl;


   /*
        Printing the size information of floating point numbers
   */

    std::cout << "******************** Floating Point Numbers ************************" << std::endl;

    std::cout << "Float : " << sizeof(float) << " bytes" << std::endl;
    std::cout << "Double : " << sizeof(double) << " bytes" << std::endl;
    std::cout << "Long double : " << sizeof(long double) << " bytes" << std::endl;

    std::cout << "****************** Size of Variables ***********************" << std::endl;
    int age {21};
    std::cout << "Age size: " << sizeof(age) << " bytes" << std::endl;

   return 0;
}