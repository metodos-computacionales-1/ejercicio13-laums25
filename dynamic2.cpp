#include <iostream>
#include <cmath>
int main(int argc, char **argv)
{
    int N=atoi(argv[1]); //casting to int
    double *M = new double[N];
    for(int i =0;i<N;i++)
    {
        M[i]=i;
    }
    delete[] M;	
    return 0;
}
