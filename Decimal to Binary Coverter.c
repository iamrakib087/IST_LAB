#include<stdio.h>
int main(){
int a,n,aux[32],i=0;
printf("Enter Any Number:");
scanf("%d",&n);
while(n>0){
    aux[i++]=n%2;
    n=n/2;
}
for(a=i-1; a>=0; a--)
printf("%d",aux[a]);
return 0;
}