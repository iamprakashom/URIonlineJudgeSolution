#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    vector<int> vec(3);
    int num;
    for(int i = 0; i<3; i++){
        cin>>num;
        vec[i] = num;
    }
    int ar[3];
    for(int i = 0; i< 3; i++){
        ar[i] = vec[i];
    }
    sort(vec.begin(), vec.end());
    for(vector<int>::iterator it = vec.begin(); it != vec.end(); ++it){
        cout<<*it<<endl;
    }
    cout<<endl;
    for(int i = 0; i < 3; i++){
        cout<<ar[i]<<endl;
    }
    return 0;
}
