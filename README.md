# AtCoderの提出物リポジトリ

- `abc/abc*`: AtCoder Beginers Contest（ABC）の提出物
- `abc/misc/*`: ABCでのRatedではない提出物
- `abs/`: [AtCoder Beginers Selection](https://atcoder.jp/contests/abs)の提出物

## メモ

- std::stoi(), std::stoll(): stringを整数に変換する
  - stoi(n, nullptr, base): baseは基数（何進数か）
- modintは`val()`で値を出力
- std::pairは`{}`で生成可能
  - 例: `std::pair<int, int> p = {1, 2};`
- std::pairは分割して取り出し可能
  - 例: `auto [a, b] = p;`
- std::pow()は大きな値では指数表記になるので整数で出力したい場合は整数型にキャストする
- std:acculate()の第3引数は初期値なので、返り値の型に合わせる
  - もし最終的な返り値がlong longなら`0LL`とする
