#include <stdio.h>
void input(int a[], int n);
void display(int a[], int n);
int findMax(int a[], int n);
int findMin(int a[], int n);
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    input(a, n);
    display(a, n);
    printf("Maximum element: %d\n", findMax(a, n));
    printf("Minimum element: %d\n", findMin(a, n));
    return 0;
}
void input(int a[], int n) {
    printf("Enter %d array elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}
void display(int a[], int n) {
    printf("Array elements:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int findMax(int a[], int n) {
    int max = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }
    return max;
}
int findMin(int a[], int n) {
    int min = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] < min) {
            min = a[i];
        }
    }
    return min;
}
