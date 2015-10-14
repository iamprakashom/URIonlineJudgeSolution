#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int time, velocity;
    float fuel;
    cin>>time>>velocity;
    fuel = ((float)time * (float)velocity)/12;
    std::cout<<std::fixed<<std::setprecision(3)<<fuel<<endl;
    return 0;
}
