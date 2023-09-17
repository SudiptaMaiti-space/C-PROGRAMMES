#include <stdio.h>
#include <math.h>
int main()
{
    float x1,x2,y1,y2,dt,s;
    printf("enter 1st coordinate\n");
    scanf("%f%f",&x1,&y1);
    printf("enter 2nd coordinate\n");
    scanf("%f%f",&x2,&y2);
    dt=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y2)));
    printf("distance between two points is %f\n", dt);
    s=(y2-y1)/(x2-x1);
    printf("slope of the line is %f\n", s);
    return 0;

}  
