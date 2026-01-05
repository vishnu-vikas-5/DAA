#include<stdio.h>
void swap (int *a,int *b){
int temp =*a;
*a =*b;
*b = temp;
}
int partision(int arr[],int low,int high){
int i=low-1;
int pivot =arr[high];
for(int j=low;j<high;j++){
if(arr[j]<pivot){
i++;
swap(&arr[i],&arr[j]);
}

}
swap(&arr[i+1],&arr[high]);
return i+1;
}
void quicksort(int arr[],int l ,int h){
if(l<h){
int m = partision(arr,l,h);
quicksort(arr,l,m-1);
quicksort(arr,m+1,h);
}
}
int main(){
int arr [12]={112,145,151,147,141,137,111,132,123,146,157,117};
quicksort(arr,0,12) ;
for(int i=1;i<=12;i++){
printf("%d ",arr[i]);
}
return 1;
}
