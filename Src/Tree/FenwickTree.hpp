#ifndef AICE_TREE_FENWICKTREE
#define AICE_TREE_FENWICKTREE

#include "Primitive/TypeDef.h"

#include <vector>
#include <cassert>
#include <iostream>

namespace aice {
namespace tree {
template <class T> class FenwickTree {
public:
  FenwickTree(s32 size, T init_value = T()) : nodes(size + 1, init_value), size(size) {}

  T sum(s32 l, s32 r) {
    return sum(r) - sum(l);
  }

  void add(s32 idx, T value) {
    idx++;
    assert(0 < idx && idx <= size);
    for (s32 i = idx; i <= size; i += (i & -i)) {
      nodes[i] += value;
    }
  }

private:
  T sum(s32 idx) {
    assert(0 <= idx && idx <= size);
    T ans(0);
    for (s32 i = idx; i > 0; i -= (i & -i)) {
      ans += nodes[i];
    }
    return ans;
  }

private:
  std::vector<T> nodes;
  s32 size;
};
}
}

#endif
