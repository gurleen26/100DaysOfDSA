#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <unordered_map>
#include <unordered_map>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    cout<<"Stack : "<<endl;
    stack<int> s;
    s.push(21);
    s.push(22);
    s.push(23);
    s.push(24);

    cout<<"Top of stack : "<<s.top()<<endl;

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<"\nIs stack empty now? : "<<s.empty();
    cout<<endl;


    cout<<"Queue: "<<endl;
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    
    cout<<"Front of queue: "<<q.front()<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

    
    cout<<"Priority Queue: "<<endl;
    priority_queue<int, vector<int>, greater<int>> pq; // greater<int> for reverse order
    pq.push(100);
    pq.push(200);
    pq.push(300);
    pq.push(400);

    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }


    cout<<"\nMap: "<<endl;
    map<string,int> m;
    m["tv"] = 100;
    m["laptop"] = 200;
    m["tablet"] = 180;
    m["earphones"] = 150;
    m["phone"] = 100;

    m.insert({"camera",45});
    m.emplace("mouse",50);

    m.erase("tv");

    for(auto p : m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }

    if(m.find("camera") != m.end())
    {
        cout<<"found"<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }


    cout<<"\nMultiMap: "<<endl;
    multimap<string, int> mp;
    mp.emplace("One", 1);
    mp.emplace("One", 1);
    mp.emplace("One", 1);
    mp.emplace("One", 1);
    mp.emplace("One", 1);

    // mp.erase(mp.find("one"));
    for(auto a: mp)
    {
        cout<<a.first<<" "<<a.second<<endl;
    }

    
    cout<<"\nUnordered map: "<<endl;
    unordered_map<string, int> um;
    um.emplace("tv",500);
    um.emplace("headphones",300);
    um.emplace("phone",100);
    um.emplace("charger",50);
    um.emplace("keyboard",200); // prints in random order 

    for(auto u : um)
    {
        cout<<u.first<<" "<<u.second<<endl;
    }


    cout<<"\nSet: "<<endl;
    set<int> ab;
    ab.insert(1);
    ab.insert(2);
    ab.insert(3);
    ab.insert(4);
    ab.insert(5);

    ab.insert(1);
    ab.insert(2);
    ab.insert(3);
    ab.insert(4);

    cout<<"\nLower bound: "<<*(ab.lower_bound(4))<<endl; // lower_bound will return an iterator which we need to dereference using *
    cout<<"\nLower bound: "<<*(ab.lower_bound(0))<<endl; 
    cout<<"\nUpper bound: "<<*(ab.upper_bound(4))<<endl; 
    for(auto val : ab)
    {
        cout<<val<<" ";
    }
    cout<<endl;


    string str = "abc";
    next_permutation(str.begin(),str.end());
    cout<<"Next permutation of abc = "<<str;

}