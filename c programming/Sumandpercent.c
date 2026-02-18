#include <stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,sum,percent;
    printf("enter marks of five subjects: ");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    sum= m1+m2+m3+m4+m5;
    percent= sum/5;
    printf("Total = %d\n",sum);
    printf("Percent = %d",percent);
    return 0;
}