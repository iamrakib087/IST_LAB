#include<stdio.h>
typedef struct{
    int roll;
    float sub[3];
    float total;
}exam;
int main(){
    exam s[5];
    int id,r,c;
    float max;
   for(r=0; r<5; r++){
       printf("\nEnter Roll: ");
       s[r].total=0;
       scanf("%d",&s[r].roll);
       printf("\nEnter Marks: ");
for(c=0; c<3; c++){
    scanf("%f",&s[r].sub[c]);
    s[r].total+=s[r].sub[c];
}
   }
max=s[0].total; id=s[0].roll;
for(int r=1; r<5; r++){
    if(max<s[r].total){
        max=s[r].total;
        id=s[r].roll;
        
    }
}
printf("\nHighest Marks Obtained By: \nRoll: %d Marks: %.2f",id,max);
return 0;
}
