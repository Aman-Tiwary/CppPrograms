/* Sieve of Eratosthenes - used to find Prime numbwer till N. 
Assume all the element as prime number and then starting from 2 mark the multiple of it as not prime*/

#include<iostream>
#include<vector>

using namespace std;

void Prime(int n)
{
    vector<int> v (n,1);
    v[0]=0;
    v[1]=0;
    for(int i=2;i<n;++i)
    {
        if(v[i]==1)
        {
            for(int j = i*i;j<n;j=j+i)  // j can be initialised as either 2*i or i*i
            {
                v[j]=0;
            }
        }
    }
    for(int i=2;i<n;++i)
    {
        if(v[i]!=0)
        {
            cout<<i<<" ";
        }
    }
}

int main()
{
    int n;
    cin>>n;
    Prime(n+1);

    return 0;
}