#include<stdio.h>
#include<math.h>

int main(){
int x1, y1, x2, y2, r1, r2, d, a;
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
    if(d*d==(r1*r1)+(r2*r2))
    printf("Given 2 circles cut each other orthogonally\n");
    else
        printf("The 2 circles don't cut each other orthogonally\n");
}
return 0;
}

