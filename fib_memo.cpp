#include<iostream>
#include<vector>

using namespace std;

vector<int> v (10,-1);

int fib(int n)
{
   if(n<=1)
   {
       v[n]=n;
       return n;
   } 
   else{
       if(v[n-2]==-1)
       {
           v[n-2] = fib(n-2);
       }
       if(v[n-1]==-1)
       {
           v[n-1] = fib(n-1);
       }
       return v[n-1]+v[n-2];
   }
}

int main()
{
    int n = 6;
    cout<<fib(n);
    return 0;
}