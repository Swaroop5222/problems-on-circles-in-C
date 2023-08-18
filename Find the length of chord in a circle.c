#include<stdio.h>
#include<math.h>

int main(){
int r, x, y, a, b, c, d, length;
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
length=2*sqrt((r*r)-(d*d));
printf("The length of chord in a circle with centre(%d,%d) and radius %d is %d",x,y,r,length);
getch();}
return 0;
}



