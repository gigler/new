//Write a program to explain the call by value and call by reference mechanism.

#include<stdio.h>
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void swapReference(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{
    int a=12,b=18;
    swap(a,b);
    printf("After swaping a=%d  b=%d",a,b);
    swapReference(&a,&b);
     printf("After swaping a=%d  b=%d",a,b);
}
