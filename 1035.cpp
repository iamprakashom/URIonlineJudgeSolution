#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    if(a % 2 == 0 && a > 0){
        if(b>c && d>a){
            if((c+d)>(a+b) && (a+b)){
                if(c >= 0 && d >= 0)
                    cout<<"Valores aceitos"<<endl;
                else
                    goto x;
            }
            else
                goto x;
        }
        else goto x;
    }
    else
    x:    cout<<"Valores nao aceitos"<<endl;
    return 0;
}
