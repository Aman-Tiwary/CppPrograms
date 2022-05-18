#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> nums {-2,1,-3,4,-1,2,1,-5,4};
     vector<int> v;
        int i=0;
        while(i!=nums.size()-1)
        {
            int sum =0;
            sum = sum + nums[i];
            v.push_back(sum);
            for(int j=i+1;j<nums.size();j++)
            {
                sum = sum+nums[j];
                cout<<"Sum:"<<sum<<" ";
                 v.push_back(sum);
                
            }
            i++;
        }
    return 0;
            
}