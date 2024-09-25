#include <iostream>  
#include <vector>  
#include <algorithm> 

int main() 
{ 
      
    std::vector<int> unorderedArray = { 5, 3, 9, 1, 4, 2, 8, 7, 6, 0 };

    std::cout << "Original unordered array: ";
    for (int num : unorderedArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    
    std::sort(unorderedArray.begin(), unorderedArray.end());

     
    std::cout << "Sorted array: ";
    for (int num : unorderedArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

