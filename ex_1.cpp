/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

float consistir()
{
    float num=0;
    
    do{
        cout<<"Digite um numero positivo\n";
        cin>>num;
    }
    while (num<=0);
    return (num);
}

float divisao(float num2)
{
   num2=num2/2;
   return (num2);
}

int main()
{
    float n=0;
    cout<<"Divide número por dois\n";
    n = consistir();
    cout<<divisao(n);
}