#include <iostream>
#include <typeinfo>
#include <vector>

int main()
{
    // Arrays Declaration
    // Element_type array_name Array_Size {Initialzed list of elements}

    int arr [3] {1, 2, 3};
    //int arr1 [] {1, 2, 3};
    int arr2 [5] {0};
     
 //   std::cout << sizeof(arr) << std::endl;
    for(int i=0; i<(int(sizeof(arr))/int(sizeof(arr[0]))); i++)
    {
        std::cout << arr[i] << std::endl;
    }


    for(int j=0; j<(int(sizeof(arr2))/int(sizeof(arr2[0]))); j++)
    {
        std::cout << arr[j] << std::endl;
    }

    std::cout << std::endl;

    return 0;
}