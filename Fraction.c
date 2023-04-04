#include<stdio.h>

int main(){

int x,y,k,w;
float z;
printf("Enter Four Values:");

scanf("%d %d %d %d",&x,&y,&k,&w);

if(y==w){
    printf("/n Not Defined");
}
else{
    z=((x-k)/(float)(y-w));
}
printf("The result Is:%.3f \n",z);


return 0;
}
