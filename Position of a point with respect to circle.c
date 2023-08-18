#include<stdio.h>
#include<math.h>

int main(){
int r, x, y, x1, y1, d;
printf("Enter the radius of the circle\n");
scanf("%d",&r);
if(r<0){
printf("please enter only a positive number");}
else{
printf("Enter the coordinates of centre c(x,y)\n");
scanf("%d %d",&x,&y);
d=sqrt(pow((x1-x),2)+pow((y1-y),2));
if(d-(r*r)>0)
    printf("The point lies outside the circle\n");
else if(d-(r*r)==0)
printf("The point lies on the circle\n");
    else
    printf("The point lies inside the circle\n");
getch();}
return 0;
}
