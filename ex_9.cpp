/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
    int x=0,y=0,z=0,maior=0,absoluta=0,soma=0;
    cout<<"Receba os tres lados de um triangulo e diga se ele eh equilatero, isosceles ou escaleno\n";
    cout<<"Digite o valor do primeiro lado\n";
    cin>>x;
    cout<<"Digite o valor do segundo lado\n";
    cin>>y;
    cout<<"Digite o valor do terceiro lado\n";
    cin>>z;
    
    //Só irá existir um triângulo se, e somente se,
    //os seus lados obedecerem à seguinte regra: um de seus lados deve ser maior que o valor
    //absoluto (módulo) da diferença dos outros dois lados e menor que a soma dos outros dois lados.
    
    if ((x>=y)&&(x>=z))
    {
        maior=x;
        absoluta=y-z;
        absoluta=abs(absoluta);
        soma=y+z;
    }
    else
    {
        if((y>=x)&&(y>=z))
        {
            maior=y;
            absoluta=x-z;
            absoluta=abs(absoluta);
            soma=x+z;
        }
        else
        {
            maior=z;
            absoluta=y-x;
            absoluta=abs(absoluta);
            soma=y+x;
        }
    }
    
    if((maior>absoluta)&&(maior<soma))
    {
        if ((x==y)&&(y==z)&&(x==z))
        {
            cout<<"O triangulo eh equilatero, pois todos os lados sao iguais"<<"\n";
        }
        else
        {
            if((x==y)||(y==z)||(x==z))
            {
                cout<<"O triangulo eh isosceles, pois possui dois lados iguais"<<"\n";
            }
            else
            {
                cout<<"O triangulo eh escaleno, pois todos os lados sao distintos"<<"\n";
            }
        }
    }
    else
    {
        cout<<"Os valores nao correspondem aos lados de um triangulo"<<"\n";
    }
    
    return 0;
}
