#include <iostream>
#include <fstream>
#include <string>
#include <list>

std::list<int>* lis(std::list<int>* nums, std::list<std::list<int>>* memo);

int main() {

    // Read from file
    std::string input;
    std::ifstream inputFile("input.txt");
    std::list<int> nums;

    // Check if file exists
    if (!inputFile) {
        std::cout << "Input file not found. Exiting.";
        return 0;
    }

    // Transfer contents of file to a list data structure
    while (inputFile.good()) {
        inputFile >> input;
        std::cout << input;
        nums.push_back(std::stoi(input));
        std::cout << "\n";
    }

    // Verify successful transfer
    std::list<int>::iterator it;
    for (it = nums.begin(); it != nums.end(); ++it) {
        std::cout << *it << "\n";
    }
    
    // Initialize memoization
    std::list<std::list<int>> memo;

    // Test: Initialize test
    std::list<int> test, test2, test3;

    // Test: Populate test
    for (int i = 0; i < 10; i++) {
        test.push_back(i);
        test2.push_back(i*2);
        test3.push_back(i + 9);
    }

    // Test: Display content in list in test
    for (it = test.begin(); it != test.end(); ++it) {
        std::cout << *it << "\t";
    }
    std::cout << "\n";
    std::cout << "\n";

    // Display content in list within list in memo
    std::list<std::list<int>>::iterator it2;
    for (it2 = memo.begin(); it2 != memo.end(); ++it2) {
            for (it = it2->begin(); it != it2->end(); ++it) {
            std::cout << *it << "\t";
        }
        std::cout << "\n";
    }
    std::cout << "\n"; 
    

    // Recursively solve the problem with memoization
    lis(&nums, &memo);
    
    std::cout << "Exiting.";
    return 0;
}

std::list<int>* lis(std::list<int>* nums, std::list<std::list<int>>* memo) {
    return nums;
}