---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: Src/Integer/QuotientRange.hpp
    title: Src/Integer/QuotientRange.hpp
  - icon: ':question:'
    path: Src/Integer/Util.hpp
    title: Src/Integer/Util.hpp
  - icon: ':question:'
    path: Src/Primitive/TypeDef.h
    title: Src/Primitive/TypeDef.h
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://atcoder.jp/contests/abc230/tasks/abc230_e
    links:
    - https://atcoder.jp/contests/abc230/tasks/abc230_e
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: Integer/QuotientRange.hpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://atcoder.jp/contests/abc230/tasks/abc230_e\"\n\n\
    #include \"Integer/QuotientRange.hpp\"\n\n#include <iostream>\n\nint main() {\n\
    \  s64 N;\n  std::cin >> N;\n\n  auto ranges = aice::integer::QuotientRange::create(N);\n\
    \n  s64 ans = 0;\n  for (const auto& elem : ranges) {\n    ans += elem.value *\
    \ elem.count();\n  }\n  std::cout << ans << std::endl;\n  return 0;\n}\n"
  dependsOn:
  - Src/Integer/QuotientRange.hpp
  - Src/Primitive/TypeDef.h
  - Src/Integer/Util.hpp
  isVerificationFile: true
  path: Test/Integer/QuotientRange/abc230_e.test.cpp
  requiredBy: []
  timestamp: '2022-03-13 06:35:04+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: Test/Integer/QuotientRange/abc230_e.test.cpp
layout: document
redirect_from:
- /verify/Test/Integer/QuotientRange/abc230_e.test.cpp
- /verify/Test/Integer/QuotientRange/abc230_e.test.cpp.html
title: Test/Integer/QuotientRange/abc230_e.test.cpp
---
