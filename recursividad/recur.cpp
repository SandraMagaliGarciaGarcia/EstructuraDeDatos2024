#include <iostream>
using namespace std;
class Recursividad{
    public:
    int factorial(int);
};
int Recursividad::factorial(int fact){
    if(fact>0){
        int valor = fact*factorial(fact-1);
        return valor;
    }
    else{
        return 1;
    }  
}
int main(){
    Recursividad *re = new Recursividad();
    int f = re->factorial(3);
    cout<<"El resultado de 4 es = "<<f;
    return 0;
}