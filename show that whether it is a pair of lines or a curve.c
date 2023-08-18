#include<stdio.h>

int main(){
int a, b, c, g, f, h, delta;
printf("Enter the coefficients of xsquare(a) and ysquare(b)\n");
scanf("%d %d",&a,&b);
printf("Enter the coefficients of x(g) and y(f)\n");
scanf("%d %d",&g,&f);
printf("Enter the coefficient of xy(h)\n");
scanf("%d",&h);
delta=(a*b*c)+(2*f*g*h)-(a*f*f)-(b*g*g)-(c*h*h);
if(delta=0)
    printf("It is a pair of straight lines\n");
else
    printf("It is a conic\n");
getch();
}
