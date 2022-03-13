---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':x:'
    path: Src/Integer/QuotientRange.hpp
    title: Src/Integer/QuotientRange.hpp
  - icon: ':question:'
    path: Src/Integer/Util.hpp
    title: Src/Integer/Util.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Test/IO/Vector/Input.test.cpp
    title: Test/IO/Vector/Input.test.cpp
  - icon: ':x:'
    path: Test/Integer/QuotientRange/abc230_e.test.cpp
    title: Test/Integer/QuotientRange/abc230_e.test.cpp
  - icon: ':heavy_check_mark:'
    path: Test/Integer/Util/sqrt.test.cpp
    title: Test/Integer/Util/sqrt.test.cpp
  _isVerificationFailed: true
  _pathExtension: h
  _verificationStatusIcon: ':question:'
  attributes:
    links: []
  bundledCode: '#line 1 "Src/Primitive/TypeDef.h"




    #include <cstdint>


    using s32 = int_fast32_t;

    using s64 = int_fast64_t;


    using u32 = uint_fast32_t;

    using u64 = uint_fast64_t;


    using f32 = float;

    using f64 = double;

    using f128 = long double;



    '
  code: '#ifndef AICE_PRIMITEVE_TYPEDEF

    #define AICE_PRIMITEVE_TYPEDEF


    #include <cstdint>


    using s32 = int_fast32_t;

    using s64 = int_fast64_t;


    using u32 = uint_fast32_t;

    using u64 = uint_fast64_t;


    using f32 = float;

    using f64 = double;

    using f128 = long double;


    #endif

    '
  dependsOn: []
  isVerificationFile: false
  path: Src/Primitive/TypeDef.h
  requiredBy:
  - Src/Integer/Util.hpp
  - Src/Integer/QuotientRange.hpp
  timestamp: '2022-03-04 14:32:59+00:00'
  verificationStatus: LIBRARY_SOME_WA
  verifiedWith:
  - Test/IO/Vector/Input.test.cpp
  - Test/Integer/QuotientRange/abc230_e.test.cpp
  - Test/Integer/Util/sqrt.test.cpp
documentation_of: Src/Primitive/TypeDef.h
layout: document
redirect_from:
- /library/Src/Primitive/TypeDef.h
- /library/Src/Primitive/TypeDef.h.html
title: Src/Primitive/TypeDef.h
---
