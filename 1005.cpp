#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;
int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double a, b;
    cin>>a;
    a = a * 3.5;
    cin>>b;
    b = b * 7.5;
    double result;
    result =(a + b)/11;
    std::cout<<"MEDIA = "<<std::fixed<<std::setprecision(5)<<result<<endl;
    return 0;
}
