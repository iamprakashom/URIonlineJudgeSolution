#include<bits/stdc++.h>
using namespace std;
double notes(double a, double amount)
{
    int n = 0;
    while(a >= amount){
            n++;
            a -= amount;
    }
    if(amount >= 2){
    cout<<n<<" nota(s) de R$ "<<std::fixed<<std::setprecision(2)<<amount<<endl;
    return a;
    }
    else
    {
        cout<<n<<" moeda(s) de R$ "<<std::fixed<<std::setprecision(2)<<amount<<endl;
        return a;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    int i = 0;
    double n;
    cin>>n;
    double not_ar[] = {100, 50, 20, 10, 5, 2, 1, 0.50, 0.25, 0.10, 0.05, 0.01};
    cout<<"NOTAS:"<<endl;
    while(not_ar[i] >= 2){
        n = notes(n, not_ar[i]);
        i++;
    }
    cout<<"MOEDAS:"<<endl;
    while(not_ar[i] >= 0.01){
        n = notes(n, not_ar[i]);
        i++;
    }
    return 0;
}
