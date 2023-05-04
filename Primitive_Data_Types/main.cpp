#include <iostream>

int main()
{
    /*
    *    Character type
    */

   char midddle_name {'R'};  //Single quotes for character
   std::cout << "My middle intitial is: " << midddle_name << std::endl;


    /*
    *      Integer type
    */

    unsigned short int exam_marks {50}; 
    std::cout << "Exam score can't be negative: " << exam_marks << std::endl;

    int countries_represented {65};
    std::cout << "There were: " << countries_represented <<
                " countries reported in the meeting" << std::endl;
    
    long people_in_florida {20610000};
    std::cout << "There are about " << people_in_florida << 
                " people in florida" << std::endl;
    
    long long people_on_earth {7'600'000'000};    // We can use ' to separate zeroes
    std::cout << "There are about " << people_on_earth << " people on earth" << std::endl;

    long long distance_aplha_centauri {9'461'000'000'000};   //If we use just long might lead to overflow
    std::cout << "The distance to Alpha Centauri is " << distance_aplha_centauri << " Kilometers" << std::endl;


    /*
    *  Floating point Types
    */

   float car_payment {401.63};
   std::cout << "My car payment is " << car_payment << std::endl;

   double pi {3.14159};
   std::cout << "The value of pi is " << pi << std::endl;

   long double large_amount {2.7e120};
   std::cout << "Such a large number: " << large_amount << std::endl;

   /*
   * Boolean type true/false
   */

  bool game_over {false};
  std::cout << "Is the game over? " << game_over << std::endl;


  /*
  *   Overflow Examples
  */
    short int value1 {30000};
    short int value2 {1000};
    short int overflow_product {value1 * value2}; // To avoid we can use int
    int product {value1 * value2};


    std::cout << "The overflow of product of value1 and value2 is: " << overflow_product << std::endl;
    std::cout << "The actual product of value1 and value2 is: " << product << std::endl;
  


   return 0;
}