#include <iostream>
#include <string>

std::string capitalizeWord(const std::string& word) {
    std::string capitalizedWord = word;
    if (!word.empty()) {
        capitalizedWord[0] = std::toupper(capitalizedWord[0]);
    }
    return capitalizedWord;
}

int main() {
    std::string inputWord;
    std::cin >> inputWord;

    std::string capitalizedWord = capitalizeWord(inputWord);
    std::cout << capitalizedWord << std::endl;

    return 0;
}
