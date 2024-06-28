#include <stdio.h>

int main() {
    int n, m;
    printf("Enter the Number of Element of first array:\n");
    scanf("%d", &n);
    printf("Enter the Number of element of second array:\n");
    scanf("%d", &m);

    int arr1[n], arr2[m];

    printf("enter the first array element:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("enter the second array element: \n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }

    int ans[n + m];
    int p = 0, q = 0, i = 0;

    while (p < n && q < m) {
        if (arr1[p] < arr2[q]) {
            ans[i] = arr1[p];
            p++;
        } else {
            ans[i] = arr2[q];
            q++;
        }
        i++;
    }

    while (p < n) {
        ans[i] = arr1[p];
        p++;
        i++;
    }

    while (q < m) {
        ans[i] = arr2[q];
        q++;
        i++;
    }

    printf("Merged and sorted array:\n");
    for (int j = 0; j < n + m; j++) {
        printf("%d\n", ans[j]);
    }

    return 0;
}

