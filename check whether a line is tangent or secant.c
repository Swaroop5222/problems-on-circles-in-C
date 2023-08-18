#include<stdio.h>
#include<math.h>

int main(){
int r, x, y, d, a, b, c;
printf("Enter the radius of the circle\n");
scanf("%d",&r);
if(r<0){
printf("please enter only a positive number");}
else{
 printf("Enter the coordinates of centre c(x,y)\n");
scanf("%d %d",&x,&y);
// a,b,c are coefficients of linear equation ax+by+c-=0
printf("Enter the coefficients of linear equation(ax+by+c=0) a,b,c\n");
scanf("%d %d %d",&a,&b,&c);
d=abs(((a*x)+(b*y)+c)/sqrt((a*a)+(b*b)));
if(r==d)
    printf("The given line is a tangent to the circle\n");
else if(r>d)
    printf("The given line is a secant to the circle\n");
else
printf("The line does not meet the circle\n");
getch();}
return 0;
}
