#include<stdio.h>
#include<math.h>
int main()
{
    float p,t,r,ci,si;     //p = principle, t = time , r = rate, ci = compound interest , si = simple interest;


    printf("Enter Principle:");
    scanf("%f",&p);

    printf("Enter Time:");
    scanf("%f",&t);

    printf("Enter Rate:");
    scanf("%f",&r);

    //simple interest:------

    si = (p*r*t/100);
    printf("Simple interest = %f"\n,  si);


   // Compound Interest ::::-----

    ci = p*(pow((1+r/100),t));
    printf("Compound interest  = %f",ci);



    return 0;
}
