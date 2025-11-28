#include<stdio.h>
 int main(){
 int a;
 printf("enter the n in the matrix");
 scanf("%d",&a);
 int arr[a][a];
 for(int i=0;i<a;i++){
  for(int j=0;j<a;j++){
  scanf("%d",&arr[i][j]);
  }
 }
  for(int i=0;i<a;i++){
  for(int j=0;j<a;j++){
  printf("%d ",arr[i][j]);
  }
  printf("\n");
 }
 printf("\n");
  for(int i=0;i<a;i++){
  for(int j=0;j<a;j++){
  printf("%d ",arr[j][i]);
  }
  printf("\n");
 }
 return 0;
 }
 // since the arr saves i*j which is a*a times so the space complexity will be o(n*n)
