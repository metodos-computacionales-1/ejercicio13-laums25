#include <iostream>
#include <cmath>

int getMaxInt(int n1, int n2);
double getMaxDouble(double nu1, double nu2);
 
int main () {
   int a = 500;
   int b = 100;
   double  x=25.0;
   double  y=47.5;
   int ret;
   double resul;
   ret = getMaxInt(a, b);
   resul = getMaxDouble(x,y);
   std::cout<<"El valor int máximo es :" <<ret<<std::endl;
   std::cout<<"El valor double máximo es :"<<resul<<std::endl;
   return 0;
}
 
int getMaxInt(int n1, int n2) {
   int resultado;
   if (n1 > n2){
      resultado = n1;
}
   else{
      resultado = n2;
}
   return resultado; //Modificado de Ejercicios aprenderaprogramar.com
}
double getMaxDouble(double nu1, double nu2){
   double r;
   if (nu1 > nu2){
   r=nu1;
}
   else {
   r=nu2;
}
   return r;
}
