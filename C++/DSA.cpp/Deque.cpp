// deque==double ended queue...IMPLEMENT by dynamic array
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
    cout<<d[3];
    return 0;

}