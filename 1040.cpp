#include<bits/stdc++.h>
using namespace std;
int avg(float x, float y, float z, float a)
{
    float average = (x*2 + y*3 + z*4 + a)/10;
    cout<<"Media: "<<std::fixed<<std::setprecision(1)<<average<<endl;
    if(average >= 7.0)
        cout<<"Aluno aprovado."<<endl;
    else if(average < 5.0)
        cout<<"Aluno reprovado."<<endl;
    else if(average >= 5.0 && average <= 6.9){
        cout<<"Aluno em exame."<<endl;
        float a;
        cin>>a;
        cout<<"Nota do exame: "<<a<<endl;
        average = (average + a)/2;
        if(average < 5.0)
            cout<<"Aluno reprovado."<<endl;
        else if(average >= 5.0)
            cout<<"Aluno aprovado."<<endl;
        cout<<"Media final: "<<std::fixed<<std::setprecision(1)<<average<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    float x, y, z, a;
    cin>>x>>y>>z>>a;
    avg(x,y,z,a);
    return 0;
}
