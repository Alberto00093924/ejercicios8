#include <iostream>
using namespace std;

int main()
{
   int n = 0, i =0;

   cout<<"ingrese un numero para ver los numeros pares anteriores a este";
   cin>> n;
   for (i= 2; i < n; i= i+2)
{
    cout <<i<<"\n";
}
   return 0;
}