#include<stdio.h>

int main(){
int r, l, m, n, h, k;
printf("Let the point of contact be (h,k)\n");
printf("Enter the radius of circle\n");
scanf("%d",&r);
if(r<0){
printf("Radius is always positive. So enter positive number\n");}
else{
printf("Enter the coefficients l,m,n in the equation lx+my+n=0\n");
scanf("%d %d %d",&l,&m,&n);
h=-(r*r*l/n);
k=-(r*r*m/n);
printf("The point of contact(h,k) is (%d,%d)",h,k);
getch();
}
return 0;
}
