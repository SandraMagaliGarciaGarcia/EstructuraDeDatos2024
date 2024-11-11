#include <iostream>
using namespace std;
class ListaSimple{
    public:
    int i;
    ListaSimple *sig;
    void crearLista();
    void imprimirLista(ListaSimple *l);
    void eliminarPrimerNodo(ListaSimple *l);
    void agregarNodoPrincipio(ListaSimple *l);
};
void ListaSimple::crearLista(){
    int n;
    ListaSimple *lista=NULL,*aux;
    cout<<"De cuantos nodos deseas la lista"<<endl;
    cin>>n;

    for(int a=0;a<n;a++){
        if(lista==NULL){
            lista = new ListaSimple();
            cout<<"Dame el valor de i"<<endl;
            cin>>lista->i;
            aux = lista;
        }else{
            aux->sig=new ListaSimple();
            aux = aux->sig;
            cout<<"Dame el valor de i"<<endl;
            cin>>aux->i;
        }
    }//llave del for
    imprimirLista(lista);
    //eliminarPrimerNodo(lista);
    agregarNodoPrincipio(lista);
}
void ListaSimple::imprimirLista(ListaSimple *l){
    ListaSimple *aux = l;
    while(aux!=NULL){
        cout<<aux->i<<endl;
        aux = aux->sig;
    }
}
void ListaSimple::eliminarPrimerNodo(ListaSimple *l){
    cout<<"metodo elimina primer nodo"<<endl;
    ListaSimple *aux = l, *aux1=l, *lista = l;
    lista = aux ->sig;
    aux->sig = NULL;
    aux = lista;
    aux1=lista;
    imprimirLista(lista);
}
void ListaSimple::agregarNodoPrincipio(ListaSimple *lista){
    ListaSimple *aux = lista;
    ListaSimple *aux2 = new ListaSimple();
    cout<<"Dame el numero del nodo"<<endl;
    cin>>aux2->i;
    aux2->sig = lista;
    lista = aux2;
    aux = aux2;
    imprimirLista(lista);
}
int main(){
    ListaSimple *llamar = new ListaSimple();
    llamar->crearLista();
}