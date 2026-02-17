#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_front(400);
    d.push_front(600);

    for(int i : d)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Pair: ";
    pair<int,int> p = {3,5};
    cout<<p.first<<" ";
    cout<<p.second<<endl;

    cout<<"Pair inside pair : ";
    pair<int,pair<char,int>> pr = {22,{'g',4}};
    cout<<pr.first<<" ";
    cout<<pr.second.first<<" ";
    cout<<pr.second.second<<endl;

    cout<<"Vector of pair"<<endl;
    vector<pair<int,int>> vec = {{1,2}, {2,3}, {4,5}, {6,7}};
    vec.push_back({8,9});
    vec.emplace_back(10,20); // in case of emplace_back no need of {} -- creates in place objects 
    // for(pair<int,int> pir: vec)
    for(auto pir: vec)
    {
        cout<<pir.first<<" ";
        cout<<pir.second<<" ";
        cout<<endl;
    }


}