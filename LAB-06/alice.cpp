#include <iostream>
#include <string>

int minStonesToRemove(int n, const std::string& s) {
    int count = 0;

    for (int i = 1; i < n; ++i) {
        if (s[i] == s[i - 1]) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;

    int result = minStonesToRemove(n, s);
    std::cout << result << std::endl;

    return 0;
}
