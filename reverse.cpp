#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    int a;
    int temp;
    vector<int> v;
    cout<<"Enter n: ";
    cin>>n;
    for(int i =0;i<n;++i)
    {
        cin>>a;
        v.push_back(a);
    }
    int  i = 0;
    int j = n-1;
    while(i<j)
    {
      temp = v[i];
      v[i] = v[j];
      v[j] = temp;  
      i++;
      j--;
    }
    cout<<"reversed array is "<<endl;
    for(int i =0;i<n;++i)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}