#include <bits/stdc++.h>

int main() {
    int t, n;
    long long k, h; 
    int idx;
    std::cin >> t;

    while (t--) {
        std::cin >> n >> k; 
        std::vector<int> health(n);
        std::vector<int> idxs(n); 
        
        for (int i = 0; i < n; i++) {
            std::cin >> h;
            if (h % k == 0) {
                health[i] = k;
            } else {
                health[i] = h % k;
            }
        }
        std::iota(idxs.begin(), idxs.end(), 0); 
        std::stable_sort(idxs.begin(), idxs.end(), [&health](int i, int j) {return health[i] > health[j];}); 
        for (auto &el : idxs) {
            std::cout << el + 1 << " ";
        }  
    }
}