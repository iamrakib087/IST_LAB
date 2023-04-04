#include<stdio.h>

int main(){

    char temp;
    float a,b;

    printf("Enter Your Value Type/n Enter c for celcius or Enter f for fahrenheit:");

    scanf("%c",&temp);

    if(temp=='c'){

        printf("\nEnter Temperature in Celcius:");

        scanf("%f",&a);

        printf("\nIn Fahrenheit The Temperature Is:%.2f",(((9*a)/5)+32));

                 }

       if(temp=='f'){

        printf("\nEnter Temperature in Fahrenheit:");

        scanf("%f",&b);

        printf("\nIn Celcius The Temperature is:%.2f",((5*(b-32))/9));

    }

return 0;
}
