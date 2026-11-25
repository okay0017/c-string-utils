#include <stdio.h>
#include <stdlib.h>
#include "string_utils.h"

int main(void) {
    char *p = str_dup("hello");
    printf("%s (len=%zu)\n", p, str_len(p));
    free(p);
    return 0;
}
