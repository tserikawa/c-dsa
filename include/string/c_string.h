#pragma once

#include <stddef.h>

typedef struct c_string c_string;

c_string *cs_new(const char *initial);
void cs_free(c_string *s);