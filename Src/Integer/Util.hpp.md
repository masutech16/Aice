---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Src/Primitive/TypeDef.h
    title: Src/Primitive/TypeDef.h
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: Src/Integer/QuotientRange.hpp
    title: Src/Integer/QuotientRange.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Test/Integer/QuotientRange/abc230_e.test.cpp
    title: Test/Integer/QuotientRange/abc230_e.test.cpp
  - icon: ':heavy_check_mark:'
    path: Test/Integer/Util/sqrt.test.cpp
    title: Test/Integer/Util/sqrt.test.cpp
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
  code: "#ifndef AICE_INTEGER_UTIL\n#define AICE_INTEGER_UTIL\n\n#include \"Primitive/TypeDef.h\"\
    \n\n#include <cmath>\n#include <cassert>\n\nnamespace aice {\nnamespace integer\
    \ {\n\nclass Util {\npublic:\n\n  /**\n   * sqrt(target)\u4EE5\u4E0B\u306E\u6700\
    \u5927\u306E\u6574\u6570\u3092\u8A08\u7B97\u3057\u307E\u3059\n   * @param target\
    \ \u5E73\u65B9\u6570\u3092\u8A08\u7B97\u3057\u305F\u3044\u5024\u30020\u4EE5\u4E0A\
    \u3067\u3042\u308B\u5FC5\u8981\u304C\u3042\u308A\u307E\u3059\n   */\n  template<class\
    \ T>\n  static T sqrt_floor(T target) {\n    assert(target >= 0);\n    T cand\
    \ = std::sqrt(target);\n    while (cand * cand > target) cand--;\n    while ((cand\
    \ + 1) * (cand + 1) <= target) cand++;\n    return cand;\n  }\n\n  /**\n * sqrt(target)\u4EE5\
    \u4E0A\u306E\u6700\u5C0F\u306E\u6574\u6570\u3092\u8A08\u7B97\u3057\u307E\u3059\
    \n * @param target \u5E73\u65B9\u6570\u3092\u8A08\u7B97\u3057\u305F\u3044\u5024\
    \u30020\u4EE5\u4E0A\u3067\u3042\u308B\u5FC5\u8981\u304C\u3042\u308A\u307E\u3059\
    \n */\n  template<class T>\n  static T sqrt_ceil(T target) {\n    assert(target\
    \ >= 0);\n    T ret = sqrt_floor(target);\n    if (ret * ret < target) {\n   \
    \   ret++;\n    }\n    return ret;\n  }\n\n\n};\n\n}\n}\n#endif\n"
  dependsOn:
  - Src/Primitive/TypeDef.h
  isVerificationFile: false
  path: Src/Integer/Util.hpp
  requiredBy:
  - Src/Integer/QuotientRange.hpp
  timestamp: '2022-03-13 05:16:59+00:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Test/Integer/QuotientRange/abc230_e.test.cpp
  - Test/Integer/Util/sqrt.test.cpp
documentation_of: Src/Integer/Util.hpp
layout: document
redirect_from:
- /library/Src/Integer/Util.hpp
- /library/Src/Integer/Util.hpp.html
title: Src/Integer/Util.hpp
---
