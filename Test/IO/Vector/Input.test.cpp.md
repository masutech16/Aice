---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Src/IO/Vector.hpp
    title: Src/IO/Vector.hpp
  - icon: ':heavy_check_mark:'
    path: Src/Primitive/TypeDef.h
    title: Src/Primitive/TypeDef.h
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_A
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_A
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: Primitive/TypeDef.h:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_A\"\
    \n\n#include \"Primitive/TypeDef.h\"\n#include \"IO/Vector.hpp\"\n\nint main()\
    \ {\n  s32 n, m;\n  std::cin >> n >> m;\n  std::vector<s32> a(m);\n  std::cin\
    \ >> a;\n  std::vector<s32> dp(n + 1, 50001);\n  dp[0] = 0;\n  for (s32 i = 1;\
    \ i <= n; i++) {\n    for (s32 j = 0; j < m; j++) {\n      if (i - a[j] >= 0)\
    \ {\n        dp[i] = std::min(dp[i], dp[i - a[j]] + 1);\n      }\n    }\n  }\n\
    \n  std::cout << dp[n] << std::endl;\n}\n"
  dependsOn:
  - Src/Primitive/TypeDef.h
  - Src/IO/Vector.hpp
  isVerificationFile: true
  path: Test/IO/Vector/Input.test.cpp
  requiredBy: []
  timestamp: '2022-03-04 14:45:42+00:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Test/IO/Vector/Input.test.cpp
layout: document
redirect_from:
- /verify/Test/IO/Vector/Input.test.cpp
- /verify/Test/IO/Vector/Input.test.cpp.html
title: Test/IO/Vector/Input.test.cpp
---
