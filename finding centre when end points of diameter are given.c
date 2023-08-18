#include<stdio.h>

int main(){
int h, k, x1, x2, y1, y2;
printf("Enter the coordinates of first end point of the diameter\n");
scanf("%d %d",&x1,&y1);
printf("Enter the coordinates of second end point of the diameter\n");
scanf("%d %d",&x2,&y2);
h=(x1+x2)/2;
k=(y1+y2)/2;
printf("The centre(h,k) is (%d,%d)",h,k);
getch();
return 0;
}
