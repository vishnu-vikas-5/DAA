#include <stdio.h>
#include <stdlib.h>

void insertion(float arr[], int n){
    for(int i = 1; i < n; i++){
        float key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void bucketSort(float arr[], int n){
    float buckets[10][10];
    int count[10] = {0};

    for(int i = 0; i < n; i++){
        int idx = arr[i] * 10;
        buckets[idx][count[idx]++] = arr[i];
    }

    for(int i = 0; i < 10; i++)
        insertion(buckets[i], count[i]);

    int k = 0;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < count[i]; j++)
            arr[k++] = buckets[i][j];
    }
}

int main(){
    float arr[] = {0.42, 0.32, 0.23, 0.52, 0.25};
    int n = 5;

    bucketSort(arr, n);

    for(int i = 0; i < n; i++)
        printf("%f ", arr[i]);
}
