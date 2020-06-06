#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float p,s;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%f",&p);
    scanf("%f",&s);
    printf("%d %d",a+b,a-b);
    printf("\n");
    printf("%.1f %.1f",p+s,p-s);
    
    return 0;
}
