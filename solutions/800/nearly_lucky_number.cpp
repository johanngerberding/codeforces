#include <bits/stdc++.h>

int main() {
  
  std::string num;
  std::cin >> num;
  
  int lucky = 0; 
  int curr;
  for (int i = 0; i < num.length(); i++) {
    curr = num[i] - 48; 
    if (curr == 4 || curr == 7) {
      lucky++;
    } 
  }
  if (lucky == 4 || lucky == 7) { 
    std::string luckystr = std::to_string(lucky); 
     
    for (int j = 0; j < luckystr.length(); j++) {
      curr = luckystr[j] - 48;
      if (curr != 4 && curr != 7) {
        std::cout << "NO";
        return 0; 
      }
    }
    std::cout << "YES"; 
  } else {
    std::cout << "NO";
  }

  return 0;
}
