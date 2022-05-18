#include <iostream>

using namespace std;

int combination(int n,int r)
{
    if(n==r||r==0)
    {
        return 1;
    }
    else 
    {
        return (combination(n-1,r)+combination(n-1,r-1));
    }
}

int main()
{
    int n,r;
    cout<<"enter n and r"<<endl;
    cin>>n>>r;
    cout<<combination(n,r);
    return 0;
}