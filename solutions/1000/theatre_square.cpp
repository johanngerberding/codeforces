#include <bits/stdc++.h>

int main() {

    long long n, m, a;
    std::cin >> n >> m >> a;

    long long x, y;
    x = (n%a == 0) ? n/a : n/a+1; 
    y = (m%a == 0) ? m/a : m/a+1; 

    std::cout << x*y;

    return 0;
}