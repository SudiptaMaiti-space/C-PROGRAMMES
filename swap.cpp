#include <stdio.h>
int swap(int a , int b)  
{  
    int temp;   
    temp = *a;  
    *a=*b;  
    *b=temp;  
    printf("After swapping values in function a = %d, b = %d\n",*a,*b); 
}
int main()  
{  
    int a = 10;  
    int b = 20;   
    printf("Before swapping the values in main a = %d, b = %d\n",a,b); 
    swap(a,&amp;b);  
    printf("After swapping values in main a = %d, b = %d\n",a,b);
}  
