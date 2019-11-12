# ejercicios13-laums25

\\ Ejercicio 2.cpp: Al momento en el que declaramos la variable "a" como constante "[int addition(const int &a, int b)]" el código no compila, lo cual significa que la función no podrá cambiar el valor del parámetro, sin importar si dicho parámetro se recibe por valor o por referencia. 

\\Ejercicio 4.cpp: Inicialmente, declaramos una función (getMaxInt) que comprueba entre dos números enteros cuál es el mayor, luego se declará una función (getMaxDouble) para comparar entre dos números tipo double cuál es el mayor. Cuando corremos el código con estas dos funciones (nombres distintos) el resultado genera el número mayor entre los enteros y los doubles. Asimismo, al momento de modificar el código con los mismos nombres las dos funciones (getMax) obtenemos el mismo resultado que de la forma anterior, lo cual se explica porque a pesar de que las funciones tienen el mismo nombre cada función está declarada para dos tipos de números diferentes. Por tanto, la que se declara para números int seqguirá comparando números enteros, mientras que la que se declara para números double comparará entre números doubles. 

\\Ejercicio (my_program.cpp): La diferencia del código final radica en el número de decimales y el formato científico en el que se imprimen los valores. Puesto que, el primer código solamente se retorna el número pi, mientras que en el otro se asigna el número de decimales y el formato ciéntifico con las siguientes líneas (std::cout.precision(16), std::cout.setf(std::ios::scientific)). Sin embargo, se sigue obteniendo el mismo valor de pi.

\\Ejercicio (dynamic.cpp): para que el código pueda correr se le debe borrar el simbolo "=", porque si "i" hace el recorrido desde 0 hasta N son N+1 iteraciones, lo cual no compilaría correctamente. Al momento de correr el código con un N muy grande, por ejemplo 10000000, se generá un error en el terminal denominado "stack overflow" lo cual es un error fatal porque recarga la memoria con muchas variables locales, sin embargo este error también se puede obtener cuando los programas contienen funciones iterativas. El fsanitize=address se utiliza para hacer comprobaciones de errores en el código que se compila. 

https://clang.llvm.org/docs/AddressSanitizer.html
If a bug is detected, the program will print an error message to stderr and exit with a non-zero exit code. AddressSanitizer exits on the first detected error. This is by design:

This approach allows AddressSanitizer to produce faster and smaller generated code (both by ~5%).
Fixing bugs becomes unavoidable. AddressSanitizer does not produce false alarms. Once a memory corruption occurs, the program is in an inconsistent state, which could lead to confusing results and potentially misleading subsequent reports.

\\Ejercicio (dynamic2.cpp): En el último ejercicio se cambio la manera de definir un arreglo, puesto que el error que sale al inicio es debido a que se crea un arreglo con un numero mayor a el que el sistema permita. Por tanto, al definirlo de la otra forma se libera el espacio de la memoria y no genera error. 
