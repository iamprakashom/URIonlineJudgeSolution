#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    float x, y;
    cin>>x>>y;
    if(x > 0 && y > 0)
        cout<<"Q1"<<endl;
    else if(x == y && x== 0)
        cout<<"Origem"<<endl;
    else if(x < 0 && y > 0)
        cout<<"Q2"<<endl;
    else if(x < 0 && y < 0)
        cout<<"Q3"<<endl;
    else if(x > 0 && y < 0)
        cout<<"Q4"<<endl;
    else if(x && y == 0)
        cout<<"Eixo X"<<endl;
    else if(x == 0 && y)
        cout<<"Eixo Y"<<endl;
    return 0;
}
