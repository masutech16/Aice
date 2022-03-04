---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Test/IO/Vector/Input.test.cpp
    title: Test/IO/Vector/Input.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Src/IO/Vector.hpp\"\n\n\n\n#include <iostream>\n#include\
    \ <vector>\n\ntemplate <class T> std::ostream &operator<<(std::ostream &out, const\
    \ std::vector<T> &v) {\n  int size = v.size();\n  for (int i = 0; i < size; i++)\
    \ {\n    std::cout << v[i];\n    if (i != size - 1)\n      std::cout << \" \"\
    ;\n  }\n  return out;\n}\n\ntemplate <class T> std::istream &operator>>(std::istream\
    \ &in, std::vector<T> &v) {\n  for (auto &el : v) {\n    std::cin >> el;\n  }\n\
    \  return in;\n}\n\n\n"
  code: "#ifndef IO_VECTOR\n#define IO_VECTOR\n\n#include <iostream>\n#include <vector>\n\
    \ntemplate <class T> std::ostream &operator<<(std::ostream &out, const std::vector<T>\
    \ &v) {\n  int size = v.size();\n  for (int i = 0; i < size; i++) {\n    std::cout\
    \ << v[i];\n    if (i != size - 1)\n      std::cout << \" \";\n  }\n  return out;\n\
    }\n\ntemplate <class T> std::istream &operator>>(std::istream &in, std::vector<T>\
    \ &v) {\n  for (auto &el : v) {\n    std::cin >> el;\n  }\n  return in;\n}\n\n\
    #endif\n"
  dependsOn: []
  isVerificationFile: false
  path: Src/IO/Vector.hpp
  requiredBy: []
  timestamp: '2022-03-04 14:45:42+00:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Test/IO/Vector/Input.test.cpp
documentation_of: Src/IO/Vector.hpp
layout: document
redirect_from:
- /library/Src/IO/Vector.hpp
- /library/Src/IO/Vector.hpp.html
title: Src/IO/Vector.hpp
---
