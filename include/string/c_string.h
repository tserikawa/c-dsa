#pragma once

#include <stddef.h>

typedef struct c_string c_string;

c_string *cs_new(const char *initial);
void cs_free(c_string *s);
size_t cs_length(const c_string *s);
const char *cs_cstr(const c_string *s);
void cs_clear(c_string *s);
void cs_append(c_string *s, const char *suffix);
void cs_prepend(c_string *s, const char *prefix);