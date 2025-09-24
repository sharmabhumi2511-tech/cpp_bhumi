// deque==double ended queue...
//deqeue==(kisi bhi quee se element pop krna)
#include<iostream>
#include<deque>
#include<vector>
using namespace std;
int main(){
    deque<int> d={3,6,9,12,18};
    for(int val:d){
        cout<<val<<"\n";
    }
    return 0;

}