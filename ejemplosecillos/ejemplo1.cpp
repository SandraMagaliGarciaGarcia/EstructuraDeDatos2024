#include<iostream>
using namespace std;
class ejemplo1{
    public:
    void operacion1();
    int operacion2(int a, int b);
};
void ejemplo1::operacion1(){
    int a = 15, b =5;
    int suma  = a + b;
    cout<<"operacion1 = "<<suma<<endl;
}
int ejemplo1::operacion2 (int a,int b){
    return a+b;
}
int main(){
    ejemplo1 *llama = new ejemplo1();
    llama ->operacion1();
    int suma = llama->operacion2(20,5);
    cout<<"operacion2 = "<<suma<<endl;
}