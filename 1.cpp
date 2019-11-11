#include <iostream>
int subtraction(int a, int b)
{
	int r;
	r=a-b;
	return r;
}
int main(void)
{
	int x=5,y=3,z;
	z=subtraction(7,2);
	std::cout<< "the first result is  " <<z<<"\n";
	std::cout<< "the sceond result is  " <<subtraction(7,2)<<"\n";
	std::cout<< "the third result is  " <<subtraction(x,y)<<"\n";
	z=4+subtraction(x,y);
	std::cout<< "the fourth result is  "<<z<<"\n";
	std::cout<<"La dirección de memoria para x es :"<<&x<<" "<<", la dirección de memoria para y es: "<<
&y<<" "<<", la dirección de memoria para z es :" <<&z<<" "<<std::endl;
	return 0;
}
