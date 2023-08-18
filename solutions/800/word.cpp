#include <bits/stdc++.h>

int main() {
  std::string word; 
  std::cin >> word;
  int N = word.length();
  int upper = 0;
  char curr; 
  for (int i = 0; i < N; i++) {
    curr = word[i];
    if (isupper(curr)) upper++;
  }
  if (upper > N - upper) {
    std::transform(word.begin(), word.end(), word.begin(), ::toupper);
  } else {
    std::transform(word.begin(), word.end(), word.begin(), ::tolower);
  }
  std::cout << word;
  return 0;
}
