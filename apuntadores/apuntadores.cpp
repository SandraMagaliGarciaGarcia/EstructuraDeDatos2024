#include <iostream>
using namespace std;
class apuntadores{
    public:
    void ejemplobasico();
    void ejemplo1();
};
void apuntadores::ejemplobasico(){
    int a = 8;
    cout<<"Valor = "<<a<<endl;
    cout<<"direccion = "<<&a<<endl;
}
void apuntadores::ejemplo1(){
    int *a;
    int *b;
    int *c;
    cout<<"direccion a = "<<a<<endl;
    cout<<"direccion b= "<<b<<endl;
    cout<<"direccion c = "<<c<<endl;
    c=b;
    cout<<"direccion c = " <<c<<endl;
    b=a;
    cout<<"direccion b = "<<b<<endl;
}
int main(){
    apuntadores *aux = new apuntadores();
    //aux->ejemplobasico();
    aux->ejemplo1();
}