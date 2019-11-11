#include<iostream>


//Modificado de https://es.stackoverflow.com/questions/104234/c-c%C3%B3digo-de-fibonacci-que-imprima-la-serie-desde-la-funci%C3%B3n-recursiva
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

int fibo(int n){
   if (n<2){
   return n;
}
   else{
   return fibo(n-1) + fibo(n-2);

}  
}

int main() {
  std::cout<<"Función recursiva : "<<recursiva(30); std::cout << '\n';
  int i;
  std::cout<<"La función con for :";
  for(int i=1;i<31;i++){
  std::cout<<fibo(i)<<"\n";

} 
  return 0;
}
