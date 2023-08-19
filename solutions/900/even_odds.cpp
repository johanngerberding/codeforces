#include <bits/stdc++.h> 

int main() {
  long long n, k; 
  std::cin >> n >> k;
  
  n = (n + 1) / 2; 
  
  if (k > n) {
    // even 
    std::cout << 2 * (k - n); 
  } else {
    // odd 
    std::cout << 2 * k - 1;  
  }

  return 0;
}
