#ifndef AICE_ALGORITHM_MO
#define AICE_ALGORITHM_MO

#include "Integer/Util.hpp"

#include <vector>
#include <cmath>
#include <numeric>
#include <algorithm>

namespace aice {
namespace algorithm {

/**
 * Mo's Algorithm を実現するクラスです
 * solveで以下のメソッドを定義したクラスを渡すとそれを使ってMoを実現します
 * void add_left(s32 i): iを現在の範囲の左端に追加する
 * void add_right(s32 i): iを現在の範囲の右端に追加する
 * void remove_left(s32 i): iを現在の範囲の左端から取り除く
 * void remove_right(s32 i): iを現在の範囲の右端から取り除く
 * AnsType output(): 現在の範囲における答えを出力する
 */
class Mo {
public:
  /**
   * コンストラクタ
   * @param N クエリが取りうる値の最大値. 1,...,Nをとる場合はNを渡してください
   */
  Mo(s32 N) : size(N + 1) {}

  /**
   * クエリを追加する。クエリは閉区間で渡す必要がある
   * @param l 範囲クエリの左端
   * @param r 範囲クエリの右端
   */
  void addQuery(s32 l, s32 r) { queries.push_back({ l, r }); }

  /**
   * Mo's Algorithmを適用する
   * @param state 区間を切り替えたときの状態を管理するクラス。上で説明したメソッドを定義している必要がある
   * @param ans 答えを入れる配列。ans[i]にi番目のクエリの答えが入る。
   */
  template <class State, class AnsType> std::vector<AnsType> solve(State& state, std::vector<AnsType>& ans) {
    auto order = calcSortedQueryIndex();
    ans.resize(static_cast<s32>(queries.size()));

    s32 left = 0;
    s32 right = 0;
    for (const auto idx : order) {
      auto query = queries[idx];
      while (left > query.first) {
        left--;
        state.addLeft(left);
      }
      while (right < query.second) {
        state.addRight(right);
        right++;
      }
      while (left < query.first) {
        state.removeLeft(left);
        left++;
      }
      while (right > query.second) {
        right--;
        state.removeRight(right);
      }

      ans[idx] = state.output();
    }
    return ans;
  }

private:
  std::vector<s32> calcSortedQueryIndex() {
    auto Q = static_cast<s32>(queries.size());
    auto backet_size = size / std::min(integer::Util::sqrt_floor(Q), size);

    std::vector<s32> order(Q);
    std::iota(order.begin(), order.end(), 0);
    std::sort(order.begin(), order.end(), [&backet_size, this](const s32 lhs, const s32 rhs) {
      s32 lhs_block_index = queries[lhs].first / backet_size;
      s32 rhs_block_index = queries[rhs].first / backet_size;
      if (lhs_block_index != rhs_block_index)
        return lhs_block_index < rhs_block_index;
      return queries[lhs].second < queries[rhs].second;
      });

    return order;
  }

private:
  s32 size;
  std::vector<std::pair<s32, s32>> queries;
};
}
}

#endif
