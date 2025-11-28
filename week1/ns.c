#include<stdio.h>
int main(){
int a;
printf("enter the number:");
scanf("%d",&a);
int c=0;
for(int i=1;i<a+1;i++){
c=c+(i*i);
}
printf("the sum of square of the number is %d",c);

return 0;
}
// since in the for loop the memory is updating the  but it doesn't effect the space of the variable so the space remains constant space complexity will be o(1);


