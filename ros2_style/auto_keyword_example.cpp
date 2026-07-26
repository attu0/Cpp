#include<iostream>
#include<vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::cout << "Using explicit iterator type:" << std::endl;
    for (std::vector<int>::iterator it = numbers.begin();it !=numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    std::cout << "Using auto keyword:" << std::endl;
    for(auto it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    return 0;
}