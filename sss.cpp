#include <stdio.h>

int main() {
    int arr[100];
    int i, n;
    
    printf("Enter array size: ");
    scanf("%d", &n);
    
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Array elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}






