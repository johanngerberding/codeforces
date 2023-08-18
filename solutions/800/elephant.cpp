#include <bits/stdc++.h>

int main() {
  int distance;
  std::cin >> distance;
  
  int steps = 0;
  while (distance > 0) {
    if (distance >= 5) {
      distance -= 5;
    } else if (distance == 4) {
      distance -= 4; 
    } else if (distance == 3) {
      distance -= 3;
    } else if (distance == 2) {
      distance -= 2;
    } else if (distance == 1) {
      distance--;
    }
    steps++;
  }
  std::cout << steps;
  return 0;
}
