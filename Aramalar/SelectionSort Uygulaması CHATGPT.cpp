#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;
    for (i = 0; i < n-1; i++) {
        minIndex = i;
        // Dizideki minimum elemanýn konumunu bulmak için iç içe döngü
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Minimum elemanýn konumuyla i. elemanýn konumunu deðiþtir
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int n;
    printf("Dizinin boyutunu girin: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Dizinin elemanlarýný girin:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Dizinin sýrasýz hali: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    selectionSort(arr, n);
    
    printf("Dizinin sýralý hali: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

