#include <stdio.h>
    int main (){
    int r,t,aux,number[10];
    printf("\nBubble Sort for 10 numbers in descending order:\n");

        printf("\nEnter the numbers:\n");
        for (r=0; r<10; r++){
	        scanf("%d",&number[r]);
        }
        printf("\nNumbers Before Sorting:\n");

        for (r=0; r<10; r++){
            printf("%d\n",number[r]);
        }


        for (r=0; r<10; r++){

            for (t=r+1; t<10; t++){
                if (number[r]<number[t]){

                    aux=number[r];
                    number[r]=number[t];
                    number[t]=aux;
                }
            }
        }

        printf("\nNumbers After Sorting:\n");

        for (t=0; t<10; t++){
            printf("%d\n", number[t]);
        }

   return 0; }

