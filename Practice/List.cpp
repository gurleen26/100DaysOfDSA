#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> li;
    li.push_back(1);
    li.emplace_back(2);
    li.push_front(3);
    li.push_front(4);

    li.pop_back(); // 2 will be deleted
    li.pop_front(); // 4 will be deleted

    for(int i : li)  
    {
        cout<<i<<" ";
    }
    cout<<endl;


}