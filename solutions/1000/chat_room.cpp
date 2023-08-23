#include <bits/stdc++.h>

int main() {
    std::string word;
    std::cin >> word;
    std::string hello = "hello";
    int idx = 0; 
    char curr = hello[idx]; 
    for (auto &el : word) {
        if (el == curr) {
            idx++;
            curr = hello[idx];
        }
    }
    if (hello.length() == idx) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
    return 0;
}