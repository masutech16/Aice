#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_B"

#include "Tree/FenwickTree.hpp"

#include <iostream>

int main() {
  s32 n, q;
  std::cin >> n >> q;

  aice::tree::FenwickTree<s32> fwt(n);

  for (s32 i = 0; i < q; i++) {
    s32 com, x, y;
    std::cin >> com >> x >> y;
    if (com == 0) {
      x--;
      fwt.add(x, y);
    }
    else {
      x--;
      std::cout << fwt.sum(x, y) << std::endl;
    }
  }
}
