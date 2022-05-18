#include<iostream>
#include<set>
#include<iterator>

using namespace std;

int main()
{
    set<int,greater<int>> s;
    set<int,greater<int>>::iterator i;
    s.insert(34);
    s.insert(23);
    s.insert(45);
    s.insert(32);

    for(i = s.begin();i!=s.end();++i)
    {
        cout<<*i<<endl;
    }
    return 0;
    }