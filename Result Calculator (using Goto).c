int main(){
    float cal,en,ph,ch,avg;

    cal:
    printf("\n Enter the number in Calculus:");
    scanf("%f",&cal);
    if(0>cal||20<cal) goto cal;
    else {
    English:
    printf("\n Enter the number in English:");
    scanf("%f",&en); }
    if (0>en||20<en) goto English;
    else {
    phy:
    printf("\n Enter the number in Physics: ");
    scanf("%f",&ph); }
    if(0>ph||20<ph) goto phy;
    else {
    chem:
    printf("\n Enter the number in Chemistry: ");
    scanf("%f",&ch); }
    if(0>ch||20<ch) goto chem;

    int average=(cal+en+ph+ch)/4.0;

    if (average<=20 && average >= 15)
    printf("\nResult is: A+\n");
    else if (average <15 && average >= 10)
    printf("\nResult is: A\n");
    else
    printf("\nfailed!!!\n");

    return 0;
}
