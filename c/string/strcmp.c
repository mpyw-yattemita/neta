#include <stdio.h>

int strcmp(const char *s1, const char *s2)
{
    while (*s1 && *s2 && *s1 == *s2) ++s1, ++s2;
    return *s1 == *s2 ? 0 : *s1 < *s2 ? -1 : 1;
}

int main(void)
{
    char s1[256], s2[256];

    printf("s1: ");
    if (scanf("%255[^\n]%*[^\n]", s1) != 1) {
        return 1;
    }
    scanf("%*c");

    printf("s2: ");
    if (scanf("%255[^\n]%*[^\n]", s2) != 1) {
        return 1;
    }
    scanf("%*c");

    printf("strcmp(s1, s2) = %d\n", strcmp(s1, s2));
    return 0;
}