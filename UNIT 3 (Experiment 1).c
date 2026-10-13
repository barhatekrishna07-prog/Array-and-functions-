
#include <stdio.h>

int main() {
    int i, n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    float b[n];
    char c[n];

    printf("\nEnter integer array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nEnter float array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &b[i]);
    }

    printf("\nEnter character array elements:\n");
    for (i = 0; i < n; i++) {
        scanf(" %c", &c[i]);
    }

    printf("\nInteger Array:\n");
    for (i = 0; i < n; i++) {
        printf("Value = %d, Address = %p\n",
               a[i], (void *)&a[i]);
    }

    printf("\nFloat Array:\n");
    for (i = 0; i < n; i++) {
        printf("Value = %.2f, Address = %p\n",
               b[i], (void *)&b[i]);
    }

    printf("\nCharacter Array:\n");
    for (i = 0; i < n; i++) {
        printf("Value = %c, Address = %p\n",
               c[i], (void *)&c[i]);
    }

    return 0;
}

//OUTPUT
Enter the number of elements: 5

Enter integer array elements:
1
2
3
4
5

Enter float array elements:
6
7
8
9
1

Enter character array elements:
A
B
C
D
E

Integer Array:
Value = 1, Address = 0x7fff6d5027f0
Value = 2, Address = 0x7fff6d5027f4
Value = 3, Address = 0x7fff6d5027f8
Value = 4, Address = 0x7fff6d5027fc
Value = 5, Address = 0x7fff6d502800

Float Array:
Value = 6.00, Address = 0x7fff6d5027d0
Value = 7.00, Address = 0x7fff6d5027d4
Value = 8.00, Address = 0x7fff6d5027d8
Value = 9.00, Address = 0x7fff6d5027dc
Value = 1.00, Address = 0x7fff6d5027e0

Character Array:
Value = A, Address = 0x7fff6d5027c0
Value = B, Address = 0x7fff6d5027c1
Value = C, Address = 0x7fff6d5027c2
Value = D, Address = 0x7fff6d5027c3
Value = E, Address = 0x7fff6d5027c4

