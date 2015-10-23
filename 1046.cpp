#include<iostream>
using namespace std;
int main()
{
    int start, last;
    cin>>start>>last;
    if(start >= 12){
        if(start == last)
            cout<<"O JOGO DUROU "<<24-start+last<<" HORA(S)"<<endl;
        else if(last >= 12 && last <= 23){
            if(last > start)
            cout<<"O JOGO DUROU "<<last-start<<" HORA(S)"<<endl;
            else
                cout<<"O JOGO DUROU "<<24-start+last<<" HORA(S)"<<endl;
        }
        else if(last == 0)
            cout<<"O JOGO DUROU "<<24-start<<" HORA(S)"<<endl;
        else if(last <12)
            cout<<"O JOGO DUROU "<<24-start+last<<" HORA(S)"<<endl;
    }
    else if(start <= 12){
        if(last >= 12 && last <= 23)
            cout<<"O JOGO DUROU "<<last - start<<" HORA(S)"<<endl;
        else if(last <12)
            cout<<"O JOGO DUROU "<<24-start<<" HORA(S)"<<endl;
        else if(last == 0)
            cout<<"O JOGO DUROU "<<24-start+last<<" HORA(S)"<<endl;
    }
    return 0;
}
