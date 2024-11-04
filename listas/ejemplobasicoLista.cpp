#include <iostream>
using namespace std;
class lista{
    public:
    int i;
    lista *sig;
    lista(){
        i =0;
        sig=NULL;
    }
    void crearNodos();
};
void lista::crearNodos(){
    lista *p = new lista(); // primer nodo
    p->i=10;
    p->sig=new lista(); //segundo nodo
    p->sig->i=5;
    p->sig->sig=new lista();//tercer nodo
    p->sig->sig->i=15;
    p->sig->sig->sig=new lista();//cuarto nodo
    p->sig->sig->sig->i = 1;
    //impresion de la lista
    cout<<p->i<<endl;
    cout<<p->sig->i<<endl;
    cout<<p->sig->sig->i<<endl;
    cout<<p->sig->sig->sig->i<<endl;
}
int main(){
 lista *llamar = new lista();
 llamar->crearNodos();
}