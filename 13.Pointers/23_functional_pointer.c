#include <stdio.h>

int password(int a, int b) 
{
    return a + b;
}
int main() {
    int (*check_password)(int, int);
    check_password = &password;
    printf("%d\n", check_password(2220, 2));
    return 0;
}