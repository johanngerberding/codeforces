#include <bits/stdc++.h>

int main() {
    std::string word;
    std::string newWord; 
    std::cin >> word;
    char lower;
    std::string vowels = "AaEeIiOoUuYy";
    std::string consonants = "bBCcDdfFgGhHjJkKlLmMnNpPqQrRsStTvVWwxXzZ";
    for (auto &el : word) {
        if (vowels.find(el) != std::string::npos) {
            continue;
        } else if (el >= 'A' && el <= 'Z'){
            newWord.push_back('.');
            lower = tolower(el);
            newWord.push_back(lower);
        } else {
            newWord.push_back('.');
            newWord.push_back(el);
        }
    } 
    std::cout << newWord; 
    return 0;
}