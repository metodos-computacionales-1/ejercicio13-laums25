#include<iostream>


//
int recursiva(int n, bool print = true)
{
  int var = 0;

  if( n > 0 )
  {
    if( n < 2 )
      var = 1;
    else
     var = recursiva(n-1,false) + recursiva(n-2,false);

    if( print )
    {
      recursiva(n-1);
      std::cout << var << ' ';
    }
  }

  return var;
}

int main() {
  recursiva(30); std::cout << '\n';
  return 0;
}
