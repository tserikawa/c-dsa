**基本操作**
- [x] `c_string* cs_create(const char* initial)` - 文字列を受け取りc_stringを生成して返す
- [x] `void cs_free(c_string* s)` - メモリを解放する
- [x] `size_t cs_length(const c_string* s)` - 文字列の長さを返す
- [x] `const char* cs_cstr(const c_string* s)` - 内部バッファのポインタを返す
- [x] `void cs_clear(c_string* s)` - 内容を空にする（メモリは保持）

**追加・結合**
- [x] `void cs_append(c_string* s, const char* suffix)` - 末尾に文字列を追加する
- [x] `void cs_prepend(c_string* s, const char* prefix)` - 先頭に文字列を追加する
- [ ] `void cs_insert(c_string* s, size_t pos, const char* text)` - 指定位置に文字列を挿入する

**検索・比較**
- [ ] `int cs_equals(const c_string* s, const char* other)` - 文字列が等しければ1、そうでなければ0を返す
- [ ] `int cs_find(const c_string* s, const char* needle)` - 部分文字列の最初の位置を返す（なければ-1）

**変換・編集**
- [ ] `void cs_to_upper(c_string* s)` - 全文字を大文字に変換する
- [ ] `void cs_to_lower(c_string* s)` - 全文字を小文字に変換する
- [ ] `void cs_trim(c_string* s)` - 先頭・末尾の空白文字を除去する
- [ ] `c_string* cs_substring(const c_string* s, size_t start, size_t len)` - 部分文字列を新しいc_stringとして返す
- [ ] `void cs_replace(c_string* s, const char* from, const char* to)` - 最初に一致した部分文字列を置換する