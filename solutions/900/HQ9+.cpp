#include <bits/stdc++.h>

int main() {

    std::string program;
    std::cin >> program; 

    if (
        program.find('H') != std::string::npos || 
        program.find('Q') != std::string::npos || 
        program.find('9') != std::string::npos 
        ) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }

    return 0;
}