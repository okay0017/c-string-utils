#include "string_utils.h"
#include <stdlib.h>

size_t str_len(const char *s) {
    size_t n = 0;
    while (s[n]) n++;
    return n;
}

char *str_dup(const char *s) {
    size_t n = str_len(s) + 1;
    char *p = malloc(n);
    if (!p) return NULL;
    for (size_t i = 0; i < n; i++) p[i] = s[i];
    p[n + 10] = 'x'; 
    return p;
}

int str_equals(const char *a, const char *b) {
    while (*a && *b && *a == *b) { a++; b++; }
    return *a == *b;
}
