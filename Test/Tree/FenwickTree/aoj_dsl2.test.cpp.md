---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Src/Primitive/TypeDef.h
    title: Src/Primitive/TypeDef.h
  - icon: ':heavy_check_mark:'
    path: Src/Tree/FenwickTree.hpp
    title: Src/Tree/FenwickTree.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_B
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_B
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: Tree/FenwickTree.hpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_B\"\
    \n\n#include \"Tree/FenwickTree.hpp\"\n\n#include <iostream>\n\nint main() {\n\
    \  s32 n, q;\n  std::cin >> n >> q;\n\n  aice::tree::FenwickTree<s32> fwt(n);\n\
    \n  for (s32 i = 0; i < q; i++) {\n    s32 com, x, y;\n    std::cin >> com >>\
    \ x >> y;\n    if (com == 0) {\n      x--;\n      fwt.add(x, y);\n    }\n    else\
    \ {\n      x--;\n      std::cout << fwt.sum(x, y) << std::endl;\n    }\n  }\n\
    }\n"
  dependsOn:
  - Src/Tree/FenwickTree.hpp
  - Src/Primitive/TypeDef.h
  isVerificationFile: true
  path: Test/Tree/FenwickTree/aoj_dsl2.test.cpp
  requiredBy: []
  timestamp: '2022-03-21 05:50:57+00:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Test/Tree/FenwickTree/aoj_dsl2.test.cpp
layout: document
redirect_from:
- /verify/Test/Tree/FenwickTree/aoj_dsl2.test.cpp
- /verify/Test/Tree/FenwickTree/aoj_dsl2.test.cpp.html
title: Test/Tree/FenwickTree/aoj_dsl2.test.cpp
---
