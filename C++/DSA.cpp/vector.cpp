#include<iostream>
#include<vector>
using namespace std;

int main(){
    //push back ka alternate emplace back...
    vector<int>vec;  //size initially 0
    vec.push_back(7);// data insert in last
    vec.push_back(8);
    vec.push_back(8);
    vec.emplace_back(9);
    vec.pop_back();//for deleting last element..
    vec.erase((vec.begin()+2));// for deleting in at postion
    vec.erase(vec.begin()+1,vec.begin()+3);
    cout<<vec.size()<<"\n";
    cout<<vec.capacity()<<"\n";
    cout<<"val at index 3 :"<<" "<<vec[3];
    cout<<"\n";
    


    // // front and back function.....
    cout<<"front"<<vec.front()<<"\n";
    cout<<"back"<<vec.back()<<"\n";

   // insert  the element at any position....
    vec.insert(vec.begin()+2,100);
    vec.clear();
    cout<<vec.capacity();

    cout<<"vec.begin"<<*(vec.begin())<<endl;
    cout<<"vec.end"<<*(vec.end())<<endl;

    for(int s: vec ){
        cout<<s<<"\n";
        
    
    return 0;


   }
}