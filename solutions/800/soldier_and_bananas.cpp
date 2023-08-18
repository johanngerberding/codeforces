#include <bits/stdc++.h>

int main() {
  int k, n, w; 
  std::cin >> k >> n >> w;
  int sum = 0;
  for (int i = 1; i <= w; i++) {
    sum += i * k; 
  }
  int rest = sum - n;
  if (rest > 0) { 
    std::cout << rest;
  } else {
    std::cout << 0;
  } 
  return 0; 
}
