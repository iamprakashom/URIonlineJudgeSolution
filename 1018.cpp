#include<iostream>
using namespace std;
int notes(int a, int amount)
{
    int n = 0;
    while(a >= amount){
            n++;
            a -= amount;
    }
    cout<<n<<" nota(s) de R$ "<<amount<<",00"<<endl;
    return a;
}
int main()
{
    ios_base::sync_with_stdio(false);
    int n, i = 0;
    int not_ar[] = {100, 50, 20, 10, 5, 2, 1};
    cin>>n;
    cout<<n<<endl;
    while(i < (sizeof(not_ar)/sizeof(not_ar[0]))){
        n = notes(n, not_ar[i]);
        i++;
    }
    return 0;
}
