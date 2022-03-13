#define PROBLEM "https://atcoder.jp/contests/abc230/tasks/abc230_e"

#include "Integer/QuotientRange.hpp"

#include <iostream>

int main() {
  s64 N;
  std::cin >> N;

  auto ranges = aice::integer::QuotientRange::create(N);

  s64 ans = 0;
  for (const auto& elem : ranges) {
    ans += elem.value * elem.count();
  }
  std::cout << ans << std::endl;
  return 0;
}
