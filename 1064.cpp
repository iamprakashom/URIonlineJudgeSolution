#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int main()
{
    vector<float> vec;
    int i = 6, cnt = 0;
    float n, sum = 0;
    while(i--){
        cin>>n;
        vec.push_back(n);
        if(n > 0){
            cnt++;
            sum +=n;
        }
    }
    cout<<cnt<<" valores positivos"<<endl;
    cout<<std::fixed<<std::setprecision(1)<<sum/(float)cnt<<endl;
    return 0;
}
