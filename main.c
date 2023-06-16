
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, a, b, c;

    scanf("%d", &m);
    scanf("%d", &a);
    scanf("%d", &b);

    if (m > a + b) {
        c = m -(a + b);
    } else {
        printf("A idade esta errada");
        return 0;
    }

    if (a > b && a > c) {
        printf("%d", a);
    } else if (b > c) {
        printf("%d", b);
    } else {
        printf("%d", c);
    }

    return 0;
}
