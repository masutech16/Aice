#ifndef AICE_INTEGER_QUOTIENTRANGE
#define AICE_INTEGER_QUOTIENTRANGE

#include "Primitive/TypeDef.h"
#include "Util.hpp"

#include <vector>

namespace aice {
namespace integer {

/**
 * 商列挙を行うためのクラスです
 * 商列挙: ある整数 X に対して、i = 1, ..., X について X/i を計算し、
 * 同じ値でまとめた結果を返します
 */
class QuotientRange {
  /**
   * N/iが同じ値をとる整数の範囲を表す構造体です
   */
  template<class T>
  struct Element {
    /**
     * N/iとなる最小のi
     */
    T left;

    /**
     * N/iとなる最大のi
     */
    T right;

    /**
     * N/iの値
     */
    T value;

    /**
     * この範囲に含まれる整数の数を返します
     */
    T count() const {
      return right - left + 1;
    }
  };

public:
  /**
   * 商列挙を行います。
   * @param X 分子に相当する要素
   */
  template <class T>
  static std::vector<Element<T>> create(T X) {
    std::vector<Element<T>> ret;
    T sq = Util::sqrt_floor(X);
    for (T i = 1; i <= sq; i++) {
      ret.emplace_back(Element<T>{ i, i, X / i });
    }

    for (T i = sq; i >= 1; i--) {
      if (i == X / i) continue;
      T left = X / (i + 1) + 1;
      T right = X / i;
      ret.emplace_back(Element<T>{ left, right, i });
    }

    return ret;
  }
};

}
}

#endif
