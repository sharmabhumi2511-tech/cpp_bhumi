#include<iostream>
#include<vector>
#include<map>
using namespace std;
//map used to store key and value...key= unique, value =can be duplicate
//bydefault data sorted ho jata hai in asending order..(key )

int main(){
    map<string,int>m;
    m["tv"]=100;
    m["laptop"]=200;
    m["headphones"]=50;
    m["neckband"]=50;
    //insert value...
    m.insert({"camra",25});
    //emplace..
    m.emplace("phone",75);
    //erase..
    m.erase("tv");
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<"\n";
    }
    cout<<"count="<<m.count("laptop")<<endl;//it return the no of existence..not return the value of lptop
    cout<<"count="<<m["laptop"]<<"\n";//it return value;

    //find ...
    if(m.find("neckband")!=m.end()){
        cout<<"found\n";
    }
    else{
        cout<<"not found\n";
    }
    return 0;



}