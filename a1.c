//Write a program to find the prime numbers within a specific range using function

#include<stdio.h>
  int
checkprime (int n)
{
  
for (int i = 2; i <= n / 2; i++)
    {
      
flag = 1;
      
if (n % i == 0)
	{
	  
flag = 0;
	  
break;
	
}
    
}
return flag;

}
void inout(){
    int lr,ur,flag;
    printf("Enter lower and upper range ");
    scanf("%d%d",&lr,ur);
    printf("Prime number:");
    for(int i=lr;i<=ur;i++){
        flag=checkprime(i);
        if(flag){
            printf("%d",checkprime(i));
        }
    }
}
void main()
{
    inout();
}