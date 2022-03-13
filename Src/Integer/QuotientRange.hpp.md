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
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Test/Integer/QuotientRange/abc230_e.test.cpp
    title: Test/Integer/QuotientRange/abc230_e.test.cpp
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
  code: "#ifndef AICE_INTEGER_QUOTIENTRANGE\n#define AICE_INTEGER_QUOTIENTRANGE\n\n\
    #include \"Primitive/TypeDef.h\"\n#include \"Util.hpp\"\n\n#include <vector>\n\
    \nnamespace aice {\nnamespace integer {\n\n/**\n * \u5546\u5217\u6319\u3092\u884C\
    \u3046\u305F\u3081\u306E\u30AF\u30E9\u30B9\u3067\u3059\n * \u5546\u5217\u6319\
    : \u3042\u308B\u6574\u6570 X \u306B\u5BFE\u3057\u3066\u3001i = 1, ..., X \u306B\
    \u3064\u3044\u3066 X/i \u3092\u8A08\u7B97\u3057\u3001\n * \u540C\u3058\u5024\u3067\
    \u307E\u3068\u3081\u305F\u7D50\u679C\u3092\u8FD4\u3057\u307E\u3059\n */\nclass\
    \ QuotientRange {\n  /**\n   * N/i\u304C\u540C\u3058\u5024\u3092\u3068\u308B\u6574\
    \u6570\u306E\u7BC4\u56F2\u3092\u8868\u3059\u69CB\u9020\u4F53\u3067\u3059\n   */\n\
    \  template<class T>\n  struct Element {\n    /**\n     * N/i\u3068\u306A\u308B\
    \u6700\u5C0F\u306Ei\n     */\n    T left;\n\n    /**\n     * N/i\u3068\u306A\u308B\
    \u6700\u5927\u306Ei\n     */\n    T right;\n\n    /**\n     * N/i\u306E\u5024\n\
    \     */\n    T value;\n\n    /**\n     * \u3053\u306E\u7BC4\u56F2\u306B\u542B\
    \u307E\u308C\u308B\u6574\u6570\u306E\u6570\u3092\u8FD4\u3057\u307E\u3059\n   \
    \  */\n    T count() const {\n      return right - left + 1;\n    }\n  };\n\n\
    public:\n  /**\n   * \u5546\u5217\u6319\u3092\u884C\u3044\u307E\u3059\u3002\n\
    \   * @param X \u5206\u5B50\u306B\u76F8\u5F53\u3059\u308B\u8981\u7D20\n   */\n\
    \  template <class T>\n  static std::vector<Element<T>> create(T X) {\n    std::vector<Element<T>>\
    \ ret;\n    T sq = Util::sqrt_floor(X);\n    for (T i = 1; i <= sq; i++) {\n \
    \     ret.emplace_back(Element<T>{ i, i, X / i });\n    }\n\n    for (T i = sq;\
    \ i >= 1; i--) {\n      if (i == X / i) continue;\n      T left = X / (i + 1)\
    \ + 1;\n      T right = X / i;\n      ret.emplace_back(Element<T>{ left, right,\
    \ i });\n    }\n\n    return ret;\n  }\n};\n\n}\n}\n\n#endif\n"
  dependsOn:
  - Src/Primitive/TypeDef.h
  - Src/Integer/Util.hpp
  isVerificationFile: false
  path: Src/Integer/QuotientRange.hpp
  requiredBy: []
  timestamp: '2022-03-13 06:35:04+00:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Test/Integer/QuotientRange/abc230_e.test.cpp
documentation_of: Src/Integer/QuotientRange.hpp
layout: document
redirect_from:
- /library/Src/Integer/QuotientRange.hpp
- /library/Src/Integer/QuotientRange.hpp.html
title: Src/Integer/QuotientRange.hpp
---
