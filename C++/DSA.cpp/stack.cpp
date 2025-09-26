#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
    stack<int>s;
    s.push(2);
    s.push(4);
    s.push(6);
    s.push(8);
    // while(!s.empty()){
    //     cout<<s.top()<<" ";//pehle elemen print ho rha hai fir baad mai pop ho rha hai isliye reverse ho g ya hai
    //     s.pop();

    // }
    // cout<<endl;
    // return 0;
    // // s.pop();//delte top element
    // // cout<<"top element="<<s.top();

    //swap one stack value into other..
    stack<int>s2;
    s2.swap(s);
    cout<<"s.size:"<<s.size()<<"\n";
    cout<<"s2.size:"<<s2.size();

    return 0;
    
}