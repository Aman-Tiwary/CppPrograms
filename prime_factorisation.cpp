#include<stdio.h>
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    vector<int> v;
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            v.push_back(i);
            n=n/i;
        }
    }
    if(n>1)
    {
        v.push_back(n);
    }
    for(int j =0;j<v.size();j++)
    {
        cout<<v[j]<<" ";
    }
    return 0;
}