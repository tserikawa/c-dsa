#include "string/c_string.h"
#include <stdlib.h>
#include <string.h>

struct c_string
{
    char *buffer;
    size_t length;
    size_t capacity;
};

c_string *cs_new(const char *initial)
{
    // 構造体のメモリを確保する
    c_string *s = malloc(sizeof(c_string));
    // メンバーの割り当て
    // bufferはポインタなので、メモリ確保を行う。
    s->length = strlen(initial);
    s->capacity = s->length + 1;
    s->buffer = malloc(s->capacity);
    // 引数initialをbufferにコピーする。
    // https://learn.microsoft.com/ja-jp/cpp/c-runtime-library/reference/memcpy-wmemcpy?view=msvc-170
    memcpy(s->buffer, initial, s->capacity);
    return s;
}

void cs_free(c_string *s)
{
    free(s->buffer);
    free(s);
}