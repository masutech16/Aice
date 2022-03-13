---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: Src/Integer/Util.hpp
    title: Src/Integer/Util.hpp
  - icon: ':question:'
    path: Src/Primitive/TypeDef.h
    title: Src/Primitive/TypeDef.h
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://yukicoder.me/problems/no/1162
    links:
    - https://yukicoder.me/problems/no/1162
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: Integer/Util.hpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://yukicoder.me/problems/no/1162\"\n\n#include \"\
    Integer/Util.hpp\"\n\n#include <iostream>\n\nint main() {\n  s64 X;\n  std::cin\
    \ >> X;\n\n  s64 sqrt_X = aice::integer::Util::sqrt_floor(X);\n\n  s64 ans = sqrt_X\
    \ * 2LL;\n  if (X / sqrt_X == sqrt_X) ans--;\n\n  std::cout << ans << std::endl;\n\
    }\n"
  dependsOn:
  - Src/Integer/Util.hpp
  - Src/Primitive/TypeDef.h
  isVerificationFile: true
  path: Test/Integer/Util/sqrt.test.cpp
  requiredBy: []
  timestamp: '2022-03-13 05:16:59+00:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Test/Integer/Util/sqrt.test.cpp
layout: document
redirect_from:
- /verify/Test/Integer/Util/sqrt.test.cpp
- /verify/Test/Integer/Util/sqrt.test.cpp.html
title: Test/Integer/Util/sqrt.test.cpp
---
