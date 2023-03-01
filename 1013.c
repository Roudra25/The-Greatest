#include<stdio.h>
int main ()
{
    int a,b,c,maxi_value;
    scanf("%d %d %d",&a,&b,&c);

    maxi_value=a;
    if(b>maxi_value)
        maxi_value=b;
    if(c>maxi_value)
        maxi_value=c;


    printf("%d eh o maior\n",maxi_value);
    return 0;

}
