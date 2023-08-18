#include<stdio.h>
#include<math.h>

int main(){
//In the equation x2+y2+2gx+2fy+c=0
int f, length, c;
printf("Enter the coefficient of x(f)\n");
scanf("%d",&f);
printf("enter the value of constant c\n");
scanf("%d",&c);
length=2*(sqrt((f*f)-c));
printf("The length of x-intercept of a circle is %d",length);
getch();
}

