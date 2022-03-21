---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Src/Primitive/TypeDef.h
    title: Src/Primitive/TypeDef.h
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Test/Tree/FenwickTree/aoj_dsl2.test.cpp
    title: Test/Tree/FenwickTree/aoj_dsl2.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: Primitive/TypeDef.h:\
    \ line -1: no such header\n"
  code: "#ifndef AICE_TREE_FENWICKTREE\n#define AICE_TREE_FENWICKTREE\n\n#include\
    \ \"Primitive/TypeDef.h\"\n\n#include <vector>\n#include <cassert>\n#include <iostream>\n\
    \nnamespace aice {\nnamespace tree {\ntemplate <class T> class FenwickTree {\n\
    public:\n  FenwickTree(s32 size, T init_value = T()) : nodes(size + 1, init_value),\
    \ size(size) {}\n\n  T sum(s32 l, s32 r) {\n    return sum(r) - sum(l);\n  }\n\
    \n  void add(s32 idx, T value) {\n    idx++;\n    assert(0 < idx && idx <= size);\n\
    \    for (s32 i = idx; i <= size; i += (i & -i)) {\n      nodes[i] += value;\n\
    \    }\n  }\n\nprivate:\n  T sum(s32 idx) {\n    assert(0 <= idx && idx <= size);\n\
    \    T ans(0);\n    for (s32 i = idx; i > 0; i -= (i & -i)) {\n      ans += nodes[i];\n\
    \    }\n    return ans;\n  }\n\nprivate:\n  std::vector<T> nodes;\n  s32 size;\n\
    };\n}\n}\n\n#endif\n"
  dependsOn:
  - Src/Primitive/TypeDef.h
  isVerificationFile: false
  path: Src/Tree/FenwickTree.hpp
  requiredBy: []
  timestamp: '2022-03-21 05:50:57+00:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Test/Tree/FenwickTree/aoj_dsl2.test.cpp
documentation_of: Src/Tree/FenwickTree.hpp
layout: document
redirect_from:
- /library/Src/Tree/FenwickTree.hpp
- /library/Src/Tree/FenwickTree.hpp.html
title: Src/Tree/FenwickTree.hpp
---
