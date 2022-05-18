#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v {2,4,5,6,7,8};
    int target =3;
    int first = v[0];
    int last = v[v.size()-1];
    int ans;
    while(first<=last )
    {
        int mid =(first+last)/2;
        if(v[mid]==target)
        {
            ans = mid;
            break;
        }

        else if(v[mid]>target)
        {
            last = mid-1;
        }

        else
        {
            first = mid+1; 
        }
    }

    if(ans>0)
    {
        cout<<"Index: "<<ans;
    }
    else
    {
        cout<<"Index: "<<last;
    }
return 0;

}