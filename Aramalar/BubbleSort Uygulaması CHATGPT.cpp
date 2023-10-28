#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        // Her ge�itte en b�y�k eleman� sa�a do�ru kayd�rmak i�in i� i�e d�ng�
        for (j = 0; j < n-i-1; j++) {
            // Yan yana iki eleman� kar��la�t�r ve gerekti�inde yerlerini de�i�tir
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Dizinin boyutunu girin: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Dizinin elemanlar�n� girin:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Dizinin s�ras�z hali: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        
    }
    printf("\n");
    
    bubbleSort(arr, n);
    
    printf("Dizinin s�ral� hali: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

