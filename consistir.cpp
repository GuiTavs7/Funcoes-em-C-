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
    int n1=0, n2=0, potencia=1, cont=1;
    cout<<"Calcular um numero (n1) elevado ao expoente x (n2)\n";
    n1 = consistir();
    n2 = consistir();
    
    while (cont<=n2){
        potencia=potencia*n1;
        cont=cont+1;
    }
    
    cout<<"A potencia do numero eh:"<<potencia;
}
