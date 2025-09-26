#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;
int main(){
    // pair<int,int>p={5,6};//not neccesarry ki pair same type ke ho
//    pair<string,int > p= {"bhumi",17};
    // cout<<p.first<<"\n";
    // cout <<p.second<<"\n";

    // pair<int,pair<char,int>>p={1,{'b',6}};
    // cout<<p.first<<"\n";
    // cout<<p.second.first<<"\n";
    // cout<<p.second.second<<"\n";

    //pair of vector....
    vector<pair<int,int>>vec={{1,2},{2,3},{4,5}};
    vec.push_back({5,6});
    vec.emplace_back(7,8);
    for(auto p:vec){
        cout<<p.first<<" "<<p.second<<endl;
    }



    return 0;

}