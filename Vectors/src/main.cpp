#include <iostream>
#include <vector>

int main()
{
    // Declaration of vectors
    // vector <type> vector_name (vector_size)  Remember vectors are dynamic in size

    // std::vector <char> vowels {'a', 'e', 'i', 'o', 'u'};

    // std::cout << vowels[0] << std::endl;
    // std::cout << vowels[2] << std::endl;

    // //vector <int> test_scores (3)   , intializes the elements to 0
    // std::vector <int> test_scores {100, 98, 89};
    // std::cout << "\nTest scores using array syntax: " << std::endl;
    // std::cout << test_scores[0] << std::endl;
    // std::cout << test_scores[1] << std::endl;
    // std::cout << test_scores[2] << std::endl;


    // std::cout << "\nTest scores using vector syntax" << std::endl;
    // std::cout << test_scores.at(0) << std::endl;
    // std::cout << test_scores.at(1) << std::endl;
    // std::cout << test_scores.at(2) << std::endl;

    // std::cout << "\nThere are " << test_scores.size() << " scores in the vector" << std::endl;

    // std::cout << "\nEnter 3 test scores: " << std::endl;
    // std::cin >> test_scores.at(0);
    // std::cin >> test_scores.at(1);
    // std::cin >> test_scores.at(2);

    // std::cout << "\nUpdated test scores" << std::endl;
    // std::cout << test_scores.at(0) << std::endl;
    // std::cout << test_scores.at(1) << std::endl;
    // std::cout << test_scores.at(2) << std::endl;

    // std::cout << "\nAdding elements to the vector" << std::endl;
    // test_scores.push_back(73);
    // test_scores.push_back(65);
    // test_scores.push_back(91);

    // std::cout << "\nThe number of elements in the vector: " << test_scores.size() << std::endl;

    // std::cout << "\nNow all the elements in the vector" << std::endl;
    // for(int i=0; i<int(test_scores.size()); i++)
    // {
    //     std::cout << test_scores.at(i) << std::endl;
    // }


    // // A 2D Vector

    // std::vector <std::vector<int>> movie_ratings
    // {
    //     {1, 2, 3, 4},
    //     {1, 2, 4, 4},
    //     {1, 3, 4, 5}
    // };

    // std::cout << "\nArray way of subscribing the vector: " << std::endl;
    // std::cout << movie_ratings[0][0] << std::endl;
    // std::cout << movie_ratings[0][1] << std::endl;
    // std::cout << movie_ratings[0][2] << std::endl;
    // std::cout << movie_ratings[0][3] << std::endl;
    // std::cout << movie_ratings[1][0] << std::endl;
    // std::cout << movie_ratings[1][1] << std::endl;
    // std::cout << movie_ratings[1][2] << std::endl;
    // std::cout << movie_ratings[1][3] << std::endl;
    // std::cout << movie_ratings[2][0] << std::endl;
    // std::cout << movie_ratings[2][1] << std::endl;
    // std::cout << movie_ratings[2][2] << std::endl;
    // std::cout << movie_ratings[2][3] << std::endl;


    // std::cout << "\nVector way of subscribing the vector: " << std::endl;
    // std::cout << movie_ratings.at(0).at(0) << std::endl;
    // std::cout << movie_ratings.at(0).at(1) << std::endl;
    // std::cout << movie_ratings.at(0).at(2) << std::endl;
    // std::cout << movie_ratings.at(0).at(3) << std::endl;

    std::vector <int> vector1;
    std::vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    std::cout << vector1.at(0) << "\t";
    std::cout << vector1.at(1) << std::endl;
    std::cout <<"Size of vector1 is " << vector1.size() << std::endl;

    vector2.push_back(100);
    vector2.push_back(200);

    std::cout << vector1.at(0) << "\t";
    std::cout << vector1.at(1) << std::endl;

    std::vector <std::vector<int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    vector1.at(0) = 1000;

    std::cout << vector_2d.at(0).at(0) << std::endl;
    std::cout << vector_2d.at(0).at(1) << std::endl;
    std::cout << vector_2d.at(1).at(0) << std::endl;
    std::cout << vector_2d.at(1).at(1) << std::endl;


    std::cout << vector1.at(0) << "\t";
    std::cout << vector1.at(1) << std::endl;

    std::cout << vector_2d.at(0).at(0) << std::endl;
    std::cout << vector_2d.at(0).at(1) << std::endl;
    std::cout << vector_2d.at(1).at(0) << std::endl;
    std::cout << vector_2d.at(1).at(1) << std::endl;

     return 0;
}