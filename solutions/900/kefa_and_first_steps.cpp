#include <bits/stdc++.h>

int main() {
    int n, d;
    std::cin >> n;
    std::vector<int> income; 
 
    for (int i = 0; i < n; i++) {
       std::cin >> d;
       income.push_back(d); 
    }

    int maxlen = 1; 
    int curr_len = 1;
    int curr, next;
    for (int i = 0; i < income.size() - 1; i++) {
        curr = income[i]; 
        next = income[i + 1]; 
        if (next >= curr) {
            curr_len++;
        } else {
            curr_len = 1;
        }
        if (curr_len > maxlen) maxlen = curr_len;
    }
    std::cout << maxlen;
    return 0;
}