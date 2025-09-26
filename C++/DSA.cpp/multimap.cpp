#include<iostream>
#include<map>
#include<vector>
using namespace std;
//we can store multiple key ...duplicate key create kr skte hai
//not use[]
int main(){
    multimap<string,int>m;
     m.emplace("tv",100);
     m.emplace("tv",100);
     m.emplace("tv",100);
     m.emplace("tv",100);
     m.emplace("tv",100);
     //erase all value in multimap....
    //  m.erase("tv");
     // if delte only one instance
     m.erase(m.find("tv"));


     //normal map only one time print
     // multi map print all value..
     for(auto p:m){
        cout<<p.first<<" "<<p.second<<"\n";
    
    
    
    }
    return 0;


}