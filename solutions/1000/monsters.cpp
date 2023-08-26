#include <bits/stdc++.h>

int main() {
    int t, n;
    long long k, h; 
    int idx;
    int curr = 1;    
    std::cin >> t;

    while (t--) {
        std::cin >> n >> k; 
        std::vector<long long> health(n);
        std::vector<int> deaths(n); 
        for (int i = 0; i < n; i++) {
            std::cin >> h;
            health[i] = h;
        }
        // find max elem  
        auto it = std::max_element(health.begin(), health.end());
        while (*it > 0) {
            if (it != health.end()) {
                idx = std::distance(health.begin(), it);
                // std::cout << "Index of max value: " << idx << "\n";
                health[idx] -= k; 
                if (health[idx] <= 0) {
                    deaths[idx] = curr;
                    curr++;
                }
            } else {
                std::cout << "Could not find maximum.\n";
            }
            it = std::max_element(health.begin(), health.end());
        }        
        for (auto &el : deaths) {
            std::cout << el << " ";
        }         
        std::cout << "\n";
        curr = 1;
    }
}