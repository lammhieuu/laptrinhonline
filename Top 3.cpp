#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int a[], int n) {
    for (int i = 0; i < n-1; i++) {
        int max_idx = i;
        for (int j = i+1; j < n; j++) {
            if (a[j] > a[max_idx]) {
                max_idx = j;
            }
        }
        swap(&a[i], &a[max_idx]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    selection_sort(a, n);
    for (int i = 3; i < n; i++) {
        printf("%d %d %d\n", a[0], a[1], a[2]);
    }
    return 0;
}

