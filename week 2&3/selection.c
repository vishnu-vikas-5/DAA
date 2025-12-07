#include <stdio.h>

void selectionSort(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        int min = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[min])
                min = j;
        }
        int t = a[i];
        a[i] = a[min];
        a[min] = t;
    }
}

int main(){
    int a[] = {5, 2, 9, 1, 5, 6};
    int n = 6;

    selectionSort(a, n);

    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
}
