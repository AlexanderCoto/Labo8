#include <iostream>
using namespace std;
int mayor(int a, int b, int c){
 if (a > b && a > c) {
        return a;
    } else if (b > a && b > c) {
        return b;
    } else {
        return c;
    }
}
int main() {
     int n1, n2, n3;
     cout<<"Ingresa 3 numeros y te dire cual es el mayor ";
     cin>>n1;
     cin>>n2;
     cin>>n3;
     cout<<"El numero mayor es: "<<mayor(n1, n2, n3)<<endl;
     return 0;
}