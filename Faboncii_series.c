#include <stdio.h>
fb(int);
  
int main(void) {
  int n;
  printf("enter the last number ");
  scanf("%d",&n);
  
  printf("the fibonacci series is %d",fb(n));
  
  return 0;
}
  fb(int n)
{
  if(n==1||n==2)
    { 
    return n;
    }
 else
     {
      return fb(n)+fb(n-1);
      }
}
