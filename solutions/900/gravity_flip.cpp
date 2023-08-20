#include <bits/stdc++.h> 

int main() {

    int num_cols;
    std::vector<int> cols;
    int col;
    std::cin >> num_cols; 
    for (int i = 0; i < num_cols; i++) {
        std::cin >> col;
        cols.push_back(col);
    }
    std::sort(cols.begin(), cols.end());
    for (auto &el : cols) {
        std::cout << el << " ";
    }
    return 0;
}