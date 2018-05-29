#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float *chengji(float *p)
{
    float q=0,sum=0,sc;
    int i=0,a=0,b=0;
    printf("!");
    while(scanf("%f",&sc)==1)
    {
        //printf("!!");
        sum=sum+sc;
        if(sc>=90)
            a++;
        if(sc>=60)
            b++;
        i++;
        q=sum/i;
       // printf(" %d %d %d %.0f",i,a,b,q);
    }
    *p=i;*(p+1)=a;*(p+2)=b;*(p+3)=q;
    return p;
}

int main()
{
    float *p;
    p=chengji(p);
    printf("%.0f\n%.0f\n%.0f\n%.2f",*p,*p+1,*p+2,*p+3);
    return 0;
}

