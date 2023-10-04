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
    int n1=0;
    cout<<"Par ou não par\n";
    n1 = consistir();
    
    if (n1 % 2 == 0){
        cout<<"O numero eh par!\n";
    }
    else {
        cout<<"Nao eh par!\n";
    }
}