# リーダブルコードメモ

[@mattsan](https://github.com/mattsan/) のコードとメモ。

全体のコードは [こちら](https://github.com/mattsan/eiji-matsumoto-2015-readable-code) 。

## 定数引数

### 実際のコード

```c
void printRecipe(const char* const filename)
```

### どうしてリーダブルだと思っているかの説明

引数 `filename` はこの関数の内部で変更することはありません。
またポインタ渡しのため、呼び出し元の変数の内容を書き換えてしまう可能性があります。

`const char* const` とすることで言語仕様上で変更を禁止すると同時に、関数内で値を変更しないことを伝えています。

### この書き方の一言説明

変更してはいけないものは変更できないようにする。
