#define PROBLEM "https://yukicoder.me/problems/no/1162"

#include "Integer/Util.hpp"

#include <iostream>

int main() {
  s64 X;
  std::cin >> X;

  s64 sqrt_X = aice::integer::Util::sqrt_floor(X);

  s64 ans = sqrt_X * 2LL;
  if (X / sqrt_X == sqrt_X) ans--;

  std::cout << ans << std::endl;
}
