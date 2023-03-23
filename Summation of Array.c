#include<stdio.h>
int main(){
int i,n,sum=0;
printf("\nEnter the Array Size:");
scanf("%d",&n);
int arr[n];
printf("Enter The Values:");
for(i=0; i<n; i++){

    scanf("%d",&arr[i]);
}
for(i=0; i<n; i++){

    sum=sum+arr[i];
}
printf("Summation Value:%d",sum);

return 0;}
