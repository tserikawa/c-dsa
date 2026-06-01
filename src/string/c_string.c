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

size_t cs_length(const c_string *s)
{
    return s->length;
}

const char *cs_cstr(const c_string *s)
{
    return s->buffer;
}

void cs_clear(c_string *s)
{
    s->buffer[0] = '\0';
    s->length = 0;
}

void cs_append(c_string *s, const char *suffix)
{
    size_t new_length = s->length + strlen(suffix);

    // bufferを再割り当てる。
    s->buffer = realloc(s->buffer, new_length);

    // 後ろに文字列を追加する。
    for (int i = 0; i < strlen(suffix); i++)
    {
        s->buffer[i + s->length] = suffix[i];
    }

    s->length = new_length;
}