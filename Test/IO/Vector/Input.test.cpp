#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_A"

#include "Primitive/TypeDef.h"
#include "IO/Vector.hpp"

int main() {
  s32 n, m;
  std::cin >> n >> m;
  std::vector<s32> a(m);
  std::cin >> a;
  std::vector<s32> dp(n + 1, 50001);
  dp[0] = 0;
  for (s32 i = 1; i <= n; i++) {
    for (s32 j = 0; j < m; j++) {
      if (i - a[j] >= 0) {
        dp[i] = std::min(dp[i], dp[i - a[j]] + 1);
      }
    }
  }

  std::cout << dp[n] << std::endl;
}
