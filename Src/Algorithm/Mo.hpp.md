---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Src/Integer/Util.hpp
    title: Src/Integer/Util.hpp
  - icon: ':heavy_check_mark:'
    path: Src/Primitive/TypeDef.h
    title: Src/Primitive/TypeDef.h
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: Integer/Util.hpp:\
    \ line -1: no such header\n"
  code: "#ifndef AICE_ALGORITHM_MO\n#define AICE_ALGORITHM_MO\n\n#include \"Integer/Util.hpp\"\
    \n\n#include <vector>\n#include <cmath>\n#include <numeric>\n#include <algorithm>\n\
    \nnamespace aice {\nnamespace algorithm {\n\n/**\n * Mo's Algorithm \u3092\u5B9F\
    \u73FE\u3059\u308B\u30AF\u30E9\u30B9\u3067\u3059\n * solve\u3067\u4EE5\u4E0B\u306E\
    \u30E1\u30BD\u30C3\u30C9\u3092\u5B9A\u7FA9\u3057\u305F\u30AF\u30E9\u30B9\u3092\
    \u6E21\u3059\u3068\u305D\u308C\u3092\u4F7F\u3063\u3066Mo\u3092\u5B9F\u73FE\u3057\
    \u307E\u3059\n * void add_left(s32 i): i\u3092\u73FE\u5728\u306E\u7BC4\u56F2\u306E\
    \u5DE6\u7AEF\u306B\u8FFD\u52A0\u3059\u308B\n * void add_right(s32 i): i\u3092\u73FE\
    \u5728\u306E\u7BC4\u56F2\u306E\u53F3\u7AEF\u306B\u8FFD\u52A0\u3059\u308B\n * void\
    \ remove_left(s32 i): i\u3092\u73FE\u5728\u306E\u7BC4\u56F2\u306E\u5DE6\u7AEF\u304B\
    \u3089\u53D6\u308A\u9664\u304F\n * void remove_right(s32 i): i\u3092\u73FE\u5728\
    \u306E\u7BC4\u56F2\u306E\u53F3\u7AEF\u304B\u3089\u53D6\u308A\u9664\u304F\n * AnsType\
    \ output(): \u73FE\u5728\u306E\u7BC4\u56F2\u306B\u304A\u3051\u308B\u7B54\u3048\
    \u3092\u51FA\u529B\u3059\u308B\n */\nclass Mo {\npublic:\n  /**\n   * \u30B3\u30F3\
    \u30B9\u30C8\u30E9\u30AF\u30BF\n   * @param N \u30AF\u30A8\u30EA\u304C\u53D6\u308A\
    \u3046\u308B\u5024\u306E\u6700\u5927\u5024. 1,...,N\u3092\u3068\u308B\u5834\u5408\
    \u306FN\u3092\u6E21\u3057\u3066\u304F\u3060\u3055\u3044\n   */\n  Mo(s32 N) :\
    \ size(N + 1) {}\n\n  /**\n   * \u30AF\u30A8\u30EA\u3092\u8FFD\u52A0\u3059\u308B\
    \u3002\u30AF\u30A8\u30EA\u306F\u9589\u533A\u9593\u3067\u6E21\u3059\u5FC5\u8981\
    \u304C\u3042\u308B\n   * @param l \u7BC4\u56F2\u30AF\u30A8\u30EA\u306E\u5DE6\u7AEF\
    \n   * @param r \u7BC4\u56F2\u30AF\u30A8\u30EA\u306E\u53F3\u7AEF\n   */\n  void\
    \ addQuery(s32 l, s32 r) { queries.push_back({ l, r }); }\n\n  /**\n   * Mo's\
    \ Algorithm\u3092\u9069\u7528\u3059\u308B\n   * @param state \u533A\u9593\u3092\
    \u5207\u308A\u66FF\u3048\u305F\u3068\u304D\u306E\u72B6\u614B\u3092\u7BA1\u7406\
    \u3059\u308B\u30AF\u30E9\u30B9\u3002\u4E0A\u3067\u8AAC\u660E\u3057\u305F\u30E1\
    \u30BD\u30C3\u30C9\u3092\u5B9A\u7FA9\u3057\u3066\u3044\u308B\u5FC5\u8981\u304C\
    \u3042\u308B\n   * @param ans \u7B54\u3048\u3092\u5165\u308C\u308B\u914D\u5217\
    \u3002ans[i]\u306Bi\u756A\u76EE\u306E\u30AF\u30A8\u30EA\u306E\u7B54\u3048\u304C\
    \u5165\u308B\u3002\n   */\n  template <class State, class AnsType> std::vector<AnsType>\
    \ solve(State& state, std::vector<AnsType>& ans) {\n    auto order = calcSortedQueryIndex();\n\
    \    ans.resize(static_cast<s32>(queries.size()));\n\n    s32 left = 0;\n    s32\
    \ right = 0;\n    for (const auto idx : order) {\n      auto query = queries[idx];\n\
    \      while (left > query.first) {\n        left--;\n        state.addLeft(left);\n\
    \      }\n      while (right < query.second) {\n        state.addRight(right);\n\
    \        right++;\n      }\n      while (left < query.first) {\n        state.removeLeft(left);\n\
    \        left++;\n      }\n      while (right > query.second) {\n        right--;\n\
    \        state.removeRight(right);\n      }\n\n      ans[idx] = state.output();\n\
    \    }\n    return ans;\n  }\n\nprivate:\n  std::vector<s32> calcSortedQueryIndex()\
    \ {\n    auto Q = static_cast<s32>(queries.size());\n    auto backet_size = size\
    \ / std::min(integer::Util::sqrt_floor(Q), size);\n\n    std::vector<s32> order(Q);\n\
    \    std::iota(order.begin(), order.end(), 0);\n    std::sort(order.begin(), order.end(),\
    \ [&backet_size, this](const s32 lhs, const s32 rhs) {\n      s32 lhs_block_index\
    \ = queries[lhs].first / backet_size;\n      s32 rhs_block_index = queries[rhs].first\
    \ / backet_size;\n      if (lhs_block_index != rhs_block_index)\n        return\
    \ lhs_block_index < rhs_block_index;\n      return queries[lhs].second < queries[rhs].second;\n\
    \      });\n\n    return order;\n  }\n\nprivate:\n  s32 size;\n  std::vector<std::pair<s32,\
    \ s32>> queries;\n};\n}\n}\n\n#endif\n"
  dependsOn:
  - Src/Integer/Util.hpp
  - Src/Primitive/TypeDef.h
  isVerificationFile: false
  path: Src/Algorithm/Mo.hpp
  requiredBy: []
  timestamp: '2022-03-21 04:48:24+00:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Src/Algorithm/Mo.hpp
layout: document
redirect_from:
- /library/Src/Algorithm/Mo.hpp
- /library/Src/Algorithm/Mo.hpp.html
title: Src/Algorithm/Mo.hpp
---
