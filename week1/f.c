#include<stdio.h>
int fac(int a){
if(a==1) return 1;
return a*fac(a-1);
}
int main(){
int a;
printf("enter the number");
scanf("%d",&a);
int v=fac(a);
printf("the factorial of the given number is %d",v);
return 0;
}
//since the return statements call the function recursively the space taken will increase accordingly only while the recursion is called because there will be another return statements so  space complexity will be o(n);
