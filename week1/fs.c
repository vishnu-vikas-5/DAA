#include<stdio.h>
int main(){
int n1=1;
int n2=1;
int a;
printf("enter the number");
scanf("%d",&a);
for(int i=0;i<a;i++){
printf("%d ",n2);
int temp=n2;
n2=n2+n1;
n1=temp;
}
return 0;
}
//since there are 3 variable the space taken will be about 12bytes and now we  are changing in the loop there is an another installation of a variable and inside the loop the space is being created n times but the variable gets overwrited there because the address of the memory will be same so the space complexity will be o(n)'
