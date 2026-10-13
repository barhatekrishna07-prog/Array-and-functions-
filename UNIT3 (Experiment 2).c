
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}

//OUTPUT
Enter the number of elements: 4
Enter the array elements:
5
8
9
2
Sum of array elements = 24
