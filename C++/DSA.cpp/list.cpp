#include<iostream>
#include<vector>
#include<list>
using namespace std;
//list....implemented as a doubly linked list..cause behave like a dll size 
//erase clear, begin, rbegin,rend, friont, back...can be perform
int main(){
    list<int>l;
    l.push_back(2);// can be use emplace_back()
    l.push_back(4);
    l.push_back(5);
    l.push_back(7);
    l.push_front(8);
    l.push_front(9);
    l.pop_back();
    l.pop_front();
    for(int val:l){
        cout<<val<<"\n";
    }
    return 0;

}