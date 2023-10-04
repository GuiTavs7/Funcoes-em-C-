#include <iostream>

using namespace std;

float consistir();
int main()
{
    float n1=0, n2=0, soma=0;
    cout<<"Somar dois numeros\n";
    n1 = consistir();
    n2 = consistir();
    soma=n1+n2;
    cout<<"A soma eh:"<<soma;
}

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
