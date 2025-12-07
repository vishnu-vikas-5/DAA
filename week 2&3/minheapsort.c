#include <stdio.h>

void minHeapify(int a[], int n, int i){
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if(left < n && a[left] < a[smallest])
        smallest = left;
    if(right < n && a[right] < a[smallest])
        smallest = right;

    if(smallest != i){
        int t = a[i];
        a[i] = a[smallest];
        a[smallest] = t;
        minHeapify(a, n, smallest);
    }
}

void minHeapSort(int a[], int n){
    for(int i = n/2 - 1; i >= 0; i--)
        minHeapify(a, n, i);

    for(int i = n - 1; i > 0; i--){
        int t = a[0];
        a[0] = a[i];
        a[i] = t;
        minHeapify(a, i, 0);
    }
}

int main(){
    int a[] = {5, 2, 9, 1, 5, 6};
    int n = 6;

    minHeapSort(a, n);

    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
}
