#include<stdio.h>
#include<string.h>
int main(){
char str[30],rev[30];
gets(str);
strcpy(rev,str);
strrev(rev);
if(strcmp(rev,str)==0){
        printf("\nThe String is Palindrome");
        }
else{printf("\nThe String isn't Palindrome");}
return 0;}
