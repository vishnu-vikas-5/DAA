#include<stdio.h>
void mergesort (int arr[],int low ,int mid,int high) {
int i=low;
int j =mid+1;
int k =0;
int temp[100];
while (i<=mid&&j<=high){
if(arr[i]>arr[j]){
temp[k++]=arr[j++];
}
else{
temp[k++]=arr[i++];
}
}
while (i<=mid){
temp [k++]=arr[i++];
}
while (j<=high){
temp [k++]=arr[j++];
}
for (int i=low, k =0 ;i<=high;i++,k++){
arr[i]=temp[k];
}
}
 void merge (int arr[] , int low ,int high){
 if(low<high){
 int mid = (low + high) / 2;
 merge (arr,low,mid );
 merge(arr,mid+1,high);
 mergesort(arr,low,mid,high);
 }
 }
 int main(){
 int arr [12]={112,145,151,147,141,137,111,132,123,146,157,117};
merge(arr,0,12) ;
for(int i=1;i<=12;i++){
printf("%d ",arr[i]);
}
 return 1;
 }
