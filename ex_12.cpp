/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int consistir()
{
    int num=0;
    
    do{
        cout<<"Digite um numero positivo\n";
        cin>>num;
    }
    while (num<=0);
    return (num);
}

int main()
{
    int n1=0, fatorial=1, aux=1;
    cout<<"Fatorial de um numero\n";
    n1 = consistir();
    
    while (aux<=n1){
        fatorial = fatorial * aux;
        aux=aux+1;
    }
    
    cout<<"O fatorial do numero eh:"<<fatorial;
}