#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> num;
    int n, i = 5;
    static int cnt = 0;
    while(i--){
        cin>>n;
        num.push_back(n);
        if(n % 2 == 0)
            cnt++;
    }
    cout<<cnt<<" valores pares"<<endl;
    return 0;
}
