#include<stdio.h>
#include<math.h>
int main(){
    int i,n;
    float sum=1;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(i=2; i<=n; i++){
        float x=pow(i,-i);
        sum+=x;
    }
    printf("The Total Sum is : %f",sum);

return 0;}
