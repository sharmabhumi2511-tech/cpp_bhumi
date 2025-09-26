#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
// normally sort in asending order...

using namespace std;
int main(){
    // int arr[5]={3,5,1,8,2};//it can be use for vector
    // vector<int>vec={3,4,8,5,2};
    vector<int>vec={8,4,3,9,10,5};
    // sort(arr,arr+5);//
    sort(vec.begin(),vec.end());
    for(auto val:vec){
        cout<<val<<"\n";
    }

    return 0;

}
