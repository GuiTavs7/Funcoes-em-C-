#include <iostream>

using namespace std;

int consistir()
{
    int num=0;
    
    do{
        cout<<"Digite um numero para verificar se eh primo ou nao\n";
        cin>>num;
    }
    while (num<=0);
    return (num);
}

int main()
{
    int n1=0, cont=0, aux=2;
    cout<<"Primo ou nao primo\n";
    n1 = consistir();
    
    while (aux<n1){
        
        if (n1%aux==0){
            cont=cont+1;
        }
        aux=aux+1;
    }
    
    if (cont>0){
        cout<<"O numero nao eh primo!\n";
    }
    else{
        cout<<"O numero eh primo!\n";
    }
}
