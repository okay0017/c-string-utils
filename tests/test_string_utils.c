#include <assert.h>
#include <string.h>
#include "string_utils.h"

int main(void) {
    assert(str_len("hello") == 5);
    assert(str_len("") == 0);
    assert(str_equals("abc", "abc") == 1);
    assert(str_equals("abc", "abd") == 0);
    char *p = str_dup("world");
    assert(strcmp(p, "world") == 0);
    free(p);
    return 0;
}
