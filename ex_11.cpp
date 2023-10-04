#include <iostream>

using namespace std;

int consistir()
{
    int num=0;
    
    do{
        cout<<"Digite um valor valido maior que zero\n";
        cin>>num;
    }
    while (num<=0);
    return (num);
}

int main()
{
    int base=0, altura=0, area=0;
    cout<<"Area do triangulo\n";
    base = consistir();
    altura = consistir();
    
    area = (base * altura)/2;
    
    cout<<"A area eh:"<<area<<"\n";
}
