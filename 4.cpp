#include <iostream>
#include <cmath>

int getMaxInt(int n1, int n2);
 
int main () {
   int a = 500;
   int b = 100;
   int ret;
   ret = getMaxInt(a, b);
   std::cout<<"El valor int máximo es :" <<ret<<std::endl;
   return 0;
}
 
int getMaxInt(int n1, int n2) {
   int resultado;
   if (n1 > n2)
      resultado = n1;
   else
      resultado = n2;
   return resultado; //Modificado de Ejercicios aprenderaprogramar.com
}

