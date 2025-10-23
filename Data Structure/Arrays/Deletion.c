#include <stdio.h>
void input(int a[], int *n);
void display(int a[], int n);
void deletion(int a[], int *n, int pos);
int main() {
    int n, a[100], pos;
    input(a, &n);
    printf("Enter the position to delete: ");
    scanf("%d", &pos);
    deletion(a, &n, pos);
    printf("Array after deletion:\n");
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
void deletion(int a[], int *n, int pos) {
    if(pos<1 || pos>*n){
        printf("Invalid position!\n");
        return;
    }
    for(int i=pos-1;i<*n-1;i++){
        a[i]=a[i+1];
    }
    (*n)--;
}
