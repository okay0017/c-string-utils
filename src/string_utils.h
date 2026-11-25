#ifndef STRING_UTILS_H
#define STRING_UTILS_H

#include <stddef.h>

size_t str_len(const char *s);
char *str_dup(const char *s);
int str_equals(const char *a, const char *b);

#endif
