#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
//unordered map=data ko unoreder krta hai data store random order mai krta hai..
//values can not duplicate...
int main(){
    unordered_map<string,int>m;
    m.emplace("tv",100);
    m.emplace("phone",100);
    m.emplace("head",100);
    m.emplace("camera",100);
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<"\n";

    }
    return 0;
    //unorderd map(o(1)) or map (o(logn)) differnece...time complixiicity
    



}