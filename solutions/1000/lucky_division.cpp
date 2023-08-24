#include <bits/stdc++.h>

bool lucky(const std::string &n) {
    for (auto &el : n) {
        if (el != '4' && el != '7') {
            return false;
        }
    }
    return true;
}

int main() {

    int num; 
    std::cin >> num;
    std::vector<int> lucky_numbers;
    std::string temp; 
    // get all lucky numbers from 0 to 1000
    for (int i=1; i<=1000; i++) {
        temp = std::to_string(i);
        if (lucky(temp)) lucky_numbers.push_back(i);
    }
    // check if num is divisible by one of those numbers        
    for (auto &el : lucky_numbers) {
        //std::cout << el << " ";
        if (num % el == 0) {
            std::cout << "YES";
            return 0;
        }
    }
    std::cout << "NO";
    return 0;
}