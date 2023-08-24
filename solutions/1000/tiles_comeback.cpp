#include <bits/stdc++.h>

bool check() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> colors; 
    int tmp; 
    for (int i = 0; i < n; i++) {
        std::cin >> tmp; 
        colors.push_back(tmp);
    }
    int left = 0, right = 0;
    int k_left = k, k_right = k; 
    // same color at start and end of sequence 
    if (colors[0] == colors[n-1]) {
        k_left = k / 2;
        k_right = k - k_left;
    } 
    int i = 0;
    int j = n - 1;
    for (; i < n && left < k_left; i++) {
        if (colors[0] == colors[i]) left++;
    }
    for (; j >= 0 && right < k_right; j--) {
        if (colors[n-1] == colors[j]) right++;
    } 

    return (i - 1) < (j + 1); 
}

int main() {
    int t; 
    std::cin >> t;
    while (t--) {
        std::cout << (check() ? "YES" : "NO") << "\n";
    } 
    return 0;
}