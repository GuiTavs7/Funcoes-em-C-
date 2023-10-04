#include <iostream>

using namespace std;

float consistir();
float divisao(float);
int main()
{
    float n=0;
    cout<<"Divide número por dois\n";
    n = consistir();
    cout<<divisao(n);
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

float divisao(float num2)
{
   num2=num2/2;
   return (num2);
}
