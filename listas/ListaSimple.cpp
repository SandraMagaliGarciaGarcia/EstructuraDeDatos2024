#include <iostream>
using namespace std;
class ListaSimple{
    public:
    int i;
    ListaSimple *sig;
    void crearLista();
    void imprimirLista(ListaSimple *l);
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
}
void ListaSimple::imprimirLista(ListaSimple *l){
    ListaSimple *aux = l;
    while(aux!=NULL){
        cout<<aux->i<<endl;
        aux = aux->sig;clear
    }
}
int main(){
    ListaSimple *llamar = new ListaSimple();
    llamar->crearLista();
}