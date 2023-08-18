#include<stdio.h>

int main(){
int x1, y1, x2, y2, r1, r2, d;
printf("Enter the centre of first circle\n");
scanf("%d %d",&x1,&y1);
printf("Enter the radius of first circle\n");
scanf("%d",&r1);
if(r1<0){
    printf("Please enter only positive value\n");
}
else{
printf("Enter the centre of second circle\n");
scanf("%d %d",&x2,&y2);
printf("Enter the radius of second circle\n");
scanf("%d",&r2);}
if(r2<0){
    printf("Please enter only positive value\n");
}
else{
    d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    if(d>(r1+r2))
        printf("The 2 circles don't touch each other or do not intersect each other\n");
    else if(d==(r1+r2))
    printf("The 2 circles touch each other externally\n");
        else if(d<(r1+r2) || d>abs(r1-r2))
        printf("The 2 circles intersect each other\n");
      else if(abs(r1-r2)==d)
      printf("The 2 circles touch each other internally\n");
    else if(d<abs(r1-r2))
    printf("Then 1 circle lies completely in the other circle\n");
    else
    printf("Then the 2 circles are concentric\n");}
return 0;
}
