#ifndef AICE_INTEGER_UTIL
#define AICE_INTEGER_UTIL

#include "Primitive/TypeDef.h"

#include <cmath>
#include <cassert>

namespace aice {
namespace integer {

class Util {
public:

  /**
   * sqrt(target)以下の最大の整数を計算します
   * @param target 平方数を計算したい値。0以上である必要があります
   */
  template<class T>
  static T sqrt_floor(T target) {
    assert(target >= 0);
    T cand = std::sqrt(target);
    while (cand * cand > target) cand--;
    while ((cand + 1) * (cand + 1) <= target) cand++;
    return cand;
  }

  /**
 * sqrt(target)以上の最小の整数を計算します
 * @param target 平方数を計算したい値。0以上である必要があります
 */
  template<class T>
  static T sqrt_ceil(T target) {
    assert(target >= 0);
    T ret = sqrt_floor(target);
    if (ret * ret < target) {
      ret++;
    }
    return ret;
  }


};

}
}
#endif
