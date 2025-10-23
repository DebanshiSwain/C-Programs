#include <stdio.h>
void input(int a[], int *n);
void display(int a[], int n);
void reverse(int a[], int n);
int main() {
    int n, a[100];
    input(a, &n);
    reverse(a, n);
    printf("Array after reversing:\n");
    display(a, n);
    return 0;
}
void input(int a[], int *n) {
    printf("Enter the size of the array: ");
    scanf("%d", n);
    printf("Enter %d elements:\n", *n);
    for(int i=0;i<*n;i++) {
        scanf("%d",&a[i]);
    }
}
void display(int a[], int n) {
    for(int i=0;i<n;i++) {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void reverse(int a[], int n) {
    int i=0, j=n-1, temp;
    while(i<j) {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
}
