#include<stdio.h>
void finds(int n){
int x=(n*(n+1))/2;
printf("the sum of first natural numbers is %d ",x);
}
int main(){
int f;
printf("enter the number:");
scanf("%d",&f);
finds(f);
return 0;
}
//since all have a constant memory allocation there the space complexity is o(1)
