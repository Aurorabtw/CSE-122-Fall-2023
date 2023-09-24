#include <iostream>
#include <string>
#include <unordered_set>

int main() {
    std::string username;
    std::cin >> username;

    // Use an unordered set to count the number of distinct characters
    std::unordered_set<char> distinctCharacters;

    // Count the distinct characters
    for (char c : username) {
        distinctCharacters.insert(c);
    }

    // Check if the number of distinct characters is odd
    if (distinctCharacters.size() % 2 == 0) {
        std::cout << "CHAT WITH HER!" << std::endl;
    } else {
        std::cout << "IGNORE HIM!" << std::endl;
    }

    return 0;
}
