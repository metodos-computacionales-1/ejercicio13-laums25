#include<iostream>

int fib(int n, bool print = true)
{
  int toReturn = 0;

  if( n > 0 )
  {
    if( n < 2 )
      toReturn = 1;
    else
     toReturn = fib(n-1,false) + fib(n-2,false);

    if( print )
    {
      fib(n-1);
      std::cout << toReturn << ' ';
    }
  }

  return toReturn;
}

int main() {
  fib(30); std::cout << '\n';
  return 0;
}
