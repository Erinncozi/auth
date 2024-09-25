#include <iostream>  
#include <vector>

  
void addElementToOrderedArray(std::vector<int>& array, int element) {
    auto it = std::lower_bound(array.begin(), array.end(), element);
    array.insert(it, element);
}

int main() {
    
    std::vector<int> orderedArray = { 1, 3, 5, 7, 9 };
    std::cout << "Ordered array: ";
    for (int num : orderedArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}