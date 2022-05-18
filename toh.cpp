/* Tower of Hanoi*/

#include<iostream>

using namespace std;

void toh(int n,int A,int B,int C)
{
    if(n>0)
    {
        toh(n-1,A,C,B);
        cout<<"move "<<A<<" to "<<C<<endl;
        toh(n-1,B,A,C);
    }
}

int main()
{
    int n,A,B,C;
    cout<<"enter n,A,B,C"<<endl;
    cin>>n>>A>>B>>C;
    toh(n,A,B,C);
    return 0;
}