#include<iostream>
#include<vector>
#include<queue>
//special ds...internally use max heap/min heap (complete binary tree)
//max heap=largest element at on the top....and min heap=smallest element at on the top
//elemt pop in sorted manner
using namespace std;
int main(){
    // priority_queue<int>q;//gives accending order
    priority_queue<int,vector<int>,greater<int>>q;//gives decending order
    q.push(5);
    q.push(4);
    q.push(10);
    q.push(1);
    while(!q.empty()){
        cout<<q.top()<<"\n";
        q.pop();

    }
     cout<<"\n";
     return 0;
//we can perform functions like push,emplace,top, pop, size, empty

}