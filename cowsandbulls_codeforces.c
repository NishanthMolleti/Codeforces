#include<stdio.h>
main()
{
    int a, b=0,c=0,d,t1,t2,a1,a2,a3,a4,d1,d2,d3,d4;
    scanf("%d%d",&a,&d);
    t1=a;
    t2=b;
    if(a/1000==d/1000)                                              //seperating each digit .
        b=b+1;
        a1=a/1000;
        d1=d/1000;
    a=a%1000;
    d=d%1000;
    if(a/100==d/100)
        b=b+1;
    a2=a/100;
    d2=d/100;
    a=a%100;
    d=d%100;
    if(a/10==d/10)
        b=b+1;
    a3=a/10;
    d3=d/10;
    a=a%10;
    d=d%10;
    if(a==d)
        b=b+1;
        a4=a;
        d4=d;
    if(a1==d2||a1==d3||a1==d4)                                          //checking conditions for each digit.
        c=c+1;
    if(a2==d1||a2==d3||a2==d4)
        c=c+1;
    if(a3==d2||a3==d1||a3==d4)
        c=c+1;
    if(a4==d2||a4==d3||a4==d1)
        c=c+1;
    printf("%d %d",b,c);

}
