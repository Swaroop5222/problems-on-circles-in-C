#include<stdio.h>
#include<math.h>

int main(){
//In the equation x2+y2+2gx+2fy+c=0
int g, length, c;
printf("Enter the coefficient of x(g)\n");
scanf("%d",&g);
printf("enter the value of constant c\n");
scanf("%d",&c);
length=2*(sqrt((g*g)-c));
printf("The length of x-intercept of a circle is %d",length);
getch();
}
