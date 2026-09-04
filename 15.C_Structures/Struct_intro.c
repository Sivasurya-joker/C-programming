#include <stdio.h>

struct sample
{
    int p;
};

int main()
{
    struct sample s;

    s.p = 10;

    printf("%d", s.p);

    return 0;
}