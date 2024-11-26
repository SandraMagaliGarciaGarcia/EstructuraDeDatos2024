#include <iostream>
using namespace std;
class Pila{
    public:
    int i;
    Pila *sig;
    Pila(){
        i=0;
        sig=NULL;
    }
    void crearPila();
    void eliminarNodoPila(Pila *l);
    void imprimirPila(Pila *l);
};
void Pila::crearPila(){
    Pila *lista = NULL, *aux;
    int n;
    cout<<"Cuantos nodos deseas la pila"<<endl;
    cin>>n;

    for(int a=0;a<n;a++){
        if(lista==NULL){
            lista = new Pila();
            cout<<"Dame el numero de primer nodo"<<endl;
            cin>>lista->i;
            aux = lista;
        }else{
            aux->sig=new Pila();
            aux = aux->sig;
            cout<<"dame el numero del nodo"<<endl;
            cin>>aux->i;
        }
    }
    imprimirPila(lista);
    eliminarNodoPila(lista);

}
void Pila::eliminarNodoPila(Pila *p){
    Pila *aux = p;
    while(aux->sig->sig!=NULL){
        aux=aux->sig;
    }
    aux->sig = NULL;
    imprimirPila(p);
}
void Pila::imprimirPila(Pila *l){
    Pila *aux=l;
    while(aux!=NULL){
        cout<<aux->i<<endl;
        aux = aux->sig;
    }
}
int main(){
    Pila *llama = new Pila();
    llama->crearPila();
    cout<<"opciones:"<<endl;
    cout<<"1: Agregar nodo"<<endl;
    cout<<"2: eliminar nodo"<<endl;
}