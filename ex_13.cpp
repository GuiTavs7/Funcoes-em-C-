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
    float saldo_medio=0,porcentagem_credito=0,valor_credito=0;
    cout<<"Calcular a porcentagem de credito de acordo com o saldo medio\n";
    cout<<"Digite o saldo medio\n";
    cin>>saldo_medio;
    
    if (saldo_medio<=200)
    {
        porcentagem_credito=0;
        valor_credito=(saldo_medio*porcentagem_credito);
        cout<<"O saldo medio eh:"<<"\n"<<saldo_medio<<"\n";
        cout<<"Credito negado. O valor de credito eh:"<<"\n"<<valor_credito<<"\n";
    }
    else
    {
        if((saldo_medio>=201)&&(saldo_medio<=400))
        {
            porcentagem_credito=0.2;
            valor_credito=(saldo_medio*porcentagem_credito);
            cout<<"O saldo medio eh:"<<"\n"<<saldo_medio<<"\n";
            cout<<"O valor de credito eh:"<<"\n"<<valor_credito<<"\n";
        }
        else
        {
           if((saldo_medio>=401)&&(saldo_medio<=600))
           {
                porcentagem_credito=0.3;
                valor_credito=(saldo_medio*porcentagem_credito);
                cout<<"O saldo medio eh:"<<"\n"<<saldo_medio<<"\n";
                cout<<"O valor de credito eh:"<<"\n"<<valor_credito<<"\n";
           }
           else
           {
               if((saldo_medio>=601))
               {
                   porcentagem_credito=0.4;
                   valor_credito=(saldo_medio*porcentagem_credito);
                   cout<<"O saldo medio eh:"<<"\n"<<saldo_medio<<"\n";
                   cout<<"O valor de credito eh:"<<"\n"<<valor_credito<<"\n";
               }
           }
        }
    
    }
    return 0;
}
