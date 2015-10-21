#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int age, y, m, d;
    cin>>age;
    y = age / 365;
    m = (age - (y * 365))/30;
    d = (age - (y * 365))%30;
    cout<<y<<" ano(s)"<<endl;
    cout<<m<<" mes(es)"<<endl;
    cout<<d<<" dia(s)"<<endl;
    return 0;
 
}
