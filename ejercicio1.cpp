#include <iostream>
using namespace std;

int main()
{
  int n;
  bool esPrimo=true;

  cout<<"ingrese un numero entero\n";
  cin>>n;

  if(n<1)
  {
    esPrimo=false;
    }else{
    for(int i=2;i<n;i++)
    {
      if (n % i ==0){
        esPrimo =false;
        break;      
     }
   }
}
if(esPrimo)
cout<<" esPrimo"<<endl;
else
cout<<"no es primo"<<endl;
return 0;
}
