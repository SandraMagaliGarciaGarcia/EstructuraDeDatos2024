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
    Pila* crearPila();
    Pila* eliminarNodoPila(Pila *l);
    Pila* eleminarNodoCola(Pila *cola);
    void imprimirPila(Pila *l);
};
Pila* Pila::crearPila(){
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
   return lista;
}
Pila* Pila::eliminarNodoPila(Pila *p){
    Pila *aux = p;
    while(aux->sig->sig!=NULL){
        aux=aux->sig;
    }
    aux->sig = NULL;
    return p;
}
void Pila::imprimirPila(Pila *l){
    Pila *aux=l;
    while(aux!=NULL){
        cout<<aux->i<<" ";
        aux = aux->sig;
    }
    cout<<endl;
}
Pila* Pila::eleminarNodoCola(Pila* cola){
    Pila* aux = cola;
    cola = cola->sig;
    aux->sig=NULL;
    aux=cola;
    return cola;
}
int main(){
    Pila *llama = new Pila();
    //Se crea el apuntador recupera para obtener la lista que se creo
    Pila* recupera = llama->crearPila();
    //imprimir la lista
    llama->imprimirPila(recupera);
    cout<<"opciones:"<<endl;
   // cout<<"1: Agregar nodo"<<endl;
    cout<<"1: eliminar nodo de la Pila"<<endl;
    cout<<"2: eliminar nodo de la Cola"<<endl;
    int dato;
    cin>>dato;
    if(dato==1){
        recupera = llama->eliminarNodoPila(recupera);
        llama->imprimirPila(recupera);
    }
    if(dato==2){
        recupera = llama->eleminarNodoCola(recupera);
        llama->imprimirPila(recupera);
    }
}