#include<stdio.h>
int main(){
int r,c,i,j;
printf("\nEnter The Number of Rows:");
scanf("%d",&r);
printf("\nEnter The Number of Columns:");
scanf("%d",&c);
int a[r][c],b[r][c],sum[r][c];
printf("\nEnter the Elements of First Matrix:\n");
for(i=0; i<r; i++){
    for(j=0; j<c; j++){
        scanf("%d",&a[i][j]);
    }
}
printf("\nEnter the Elements of Second Matrix:\n");
for(i=0; i<r; i++){
    for(j=0; j<c; j++){
        scanf("%d",&b[i][j]);
    }
}
for(i=0; i<r; i++){
    for(j=0; j<c; j++){
        sum[i][j]=a[i][j]+b[i][j];
    }
}
printf("\nSum of Two Matrixes:\n");
for(i=0; i<r; i++){
    for(j=0; j<c; j++){
        printf("%d ",sum[i][j]);
        if (j==c-1) {
        printf("\n\n");
        }
    }
}








return 0;}
