#include<stdio.h>
int fact(int n){
    int f=1;
    if(n==1||n==0){
        return 1;}
    else{f=n*fact(n-1);
    return f;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",fact(n));
    return 0;
}
