#include <stdio.h> // printf
#include <limits.h>
int big = INT_MAX;
int
testovf (void)
{
    return big + 1 < big;
}

int main() {
    int val = testovf();
    printf("val is: %d\n", val);
    return 1;
}