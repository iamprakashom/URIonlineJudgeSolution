#include<iostream>
using namespace std;
int maxi(int a, int b, int c)
{
    if(a> b)
    {
        if(a >c)
            cout<<a<<" eh o maior"<<endl;
        else
            cout<<c<<" eh o maior"<<endl;
    }
    else if(b > c)
        cout<<b<<" eh o maior"<<endl;
        else
            cout<<c<<" eh o maior"<<endl;
}
int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    maxi(a,b,c);
    return 0;
}
