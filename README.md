# AtCoderの提出物リポジトリ

- `abc/abc*`: AtCoder Beginers Contest（ABC）の提出物
- `abc/misc/`: ABCでのRatedではない提出物
- `abs/`: [AtCoder Beginers Selection](https://atcoder.jp/contests/abs)の提出物
- `past100/`: 「[初中級者が解くべき過去問精選100問](https://qiita.com/e869120/items/eb50fdaece12be418faa#2-3-分野別初中級者が解くべき過去問精選-100-問)」の解答コード

## メモ

- std::stoi(), std::stoll(): stringを整数に変換する
  - stoi(n, nullptr, base): baseは基数（何進数か）
- modintはval()で値を出力
- std::pairは`{}`で生成可能
  - 例: `pair<int, int> p = {1, 2};`
- std::pairは分割して取り出し可能
  - 例: `auto [a, b] = p;`
- std::pow()は大きな値では指数表記になるので整数で出力したい場合は整数型にキャストする
- std:acculate()の第3引数は初期値なので、返り値の型に合わせる
  - もし最終的な返り値がlong longなら`0LL`とする
- std::setの初期化は`{}`で行う
  - 例: `set<int> s{1, 2, 3};`
- coutの右に三項演算子を入れる場合は、値全体を括弧で括る
  - 例: `cout << (a < c ? "Yes" : "No") << endl;`
- std::setprecision()で出力桁数の指定
  - その前にstd::fixedを付けると小数点以下の桁数指定になる
  - 例: `cout << fixed << setprecision(15) << f << endl;`
- std::setfill()とstd::setw()を組み合わせると0埋めができる
  - 例: `cout << setfill('0') << setw(3) << 1 << endl;`
- std::next_permutation()で引数の順列を次に変更する
  - すべての順列を繰り返しで取得したい場合、初期値はソート済みである必要がある
- std::lower_boundの後にインデックスを取得したい場合、std::setではなくstd::vectorを使う
  - std::setではなぜかstd::distance()（O(n)）を使う必要がある
- std::vector::remove_ifはそれ自体はvectorの要素を削除せず、イテレータを返す
  - 要素を削除するには、std::vector::erase()と併用する: `v.erase(remove_if(v.begin(), v.end(), [](auto x){return x == 1;}), v.end());`
