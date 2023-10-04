#include <iostream>

using namespace std;

int main()
{
    int n1=0, n2=0;
    
    cout<<"Ordem crescente e decrescente\n";
    
    do{
        cout<<"Digite n1\n";
        cin>>n1;
        cout<<"Digite n2\n";
        cin>>n2;
        
        if (n1==n2){
            cout<<"Digite dois numeros distintos!\n";
        }
        
    } while (n1==n2); 
    
    if (n1>n2){
        cout<<"A ordem crescente eh:"<<n2<<","<<n1<<"\n";
        cout<<"A ordem decrescente eh:"<<n1<<","<<n2<<"\n";
    }
    else{
        if (n2>n1){
            cout<<"A ordem crescente eh:"<<n1<<","<<n2<<"\n";
            cout<<"A ordem decrescente eh:"<<n2<<","<<n1<<"\n";
        }
    }
}
