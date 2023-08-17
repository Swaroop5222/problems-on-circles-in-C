#include<stdio.h>
#include<math.h>

int main(){
int r, a, b, c, g, f;
printf("Enter the coefficient of x\n");
scanf("%d",&g);
printf("Enter the coefficient of y\n");
scanf("%d",&f);
a=-(g/2);
b=-(f/2);
printf("The coordinates of centre are %d,%d",a,b);
printf("\nEnter the constant c\n");
scanf("%d",&c);
r=sqrt((a*a)+(b*b)-c);
printf("The radius of circle is %d",r);
getch();

return 0;
}
