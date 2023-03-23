#include<stdio.h>
int main(){
int arr[4]={10,20,30,40},r[8],i,a=0,b=0;
char arr2[4]={'T','E','S','T'};
for(i=0; i<8; i++){

    if(i%2==0){
        r[i]=arr2[a];
        a++;
    }
    else{
        r[i]=arr[b];
        b++;
    }
}
for(i=0; i<8; i++){

    if(i%2==0){

        printf("%c",r[i]);
    }
    else{
        printf("%d",r[i]);
    }
}

return 0;}
