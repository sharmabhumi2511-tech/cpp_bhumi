#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={2,4,6,8};
    // vector<int>::iterator it;
    // for(it=vec.begin(); it!=vec.end(); it++)// for forward loop
    // {
    //     cout<<*(it)<<"\n";

    // }
    vector<int>::reverse_iterator it; /// for backward loop...we can use auto instead of declear reverse iterator
    for(auto it=vec.rbegin(); it!=vec.rend(); it++){
        cout<<*(it)<<" ";
    }
    
    return 0;

}