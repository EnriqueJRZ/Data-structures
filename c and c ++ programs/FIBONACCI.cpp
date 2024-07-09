#include<iostream>
using namespace std;

int fib(int n)
{
    if(n < 2)
    return n;
    return fib(n-1) + fib(n-2);
  }
  
int main() 
{
  int n;
  puts("\nIngrese el numero hasta donde desea ver la serie de fibonacci \n");
  scanf("%d",&n);
  fib(n);
  puts("____________________________________________________________________________");
  for(int i =0; i <= n; i++)
   {
   	printf("%d \n",fib(i));
   	
   }

  return 0;
}
