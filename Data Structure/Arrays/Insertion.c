#include <stdio.h>
void input(int a[], int *n);
void display(int a[], int n);
void insertion(int a[], int *n, int key, int pos);
int main() {
    int n, a[100], key, pos;
    input(a, &n);
    printf("Enter the element to insert: ");
    scanf("%d", &key);
    printf("Enter the position to insert: ");
    scanf("%d", &pos);
    insertion(a, &n, key, pos);
    printf("Array after insertion:\n");
    display(a, n);
    return 0;
}
void input(int a[], int *n) {
    printf("Enter the size of the array: ");
    scanf("%d", n);
    printf("Enter %d elements:\n", *n);
    for(int i=0;i<*n;i++){
        scanf("%d",&a[i]);
    }
}
void display(int a[], int n) {
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
void insertion(int a[], int *n, int key, int pos) {
    if(pos<1 || pos>*n+1) {
        printf("Invalid position!\n");
        return;
    }
    for(int i=*n;i>=pos;i--){ 
        a[i]=a[i-1];
    }
    a[pos-1]=key;
    (*n)++;
}
