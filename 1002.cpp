#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double r , a;
    const double pi = 3.14159;
    cin>>r;
    a = pi * r * r;
    std::cout<<"A="<<std::setprecision(4)<<std::fixed<<a<<endl;    //Result rounded to four decimal digits.
    return 0;
}

