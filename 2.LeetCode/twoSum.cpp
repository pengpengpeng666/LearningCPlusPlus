#include<iostream>
#include<vector>

using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> result;
        int i, j;

        for (i=0; i<nums.size(); ++i) {
            for (j=0; j<nums.size(); ++j) {
                if (i!=j && nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        } 
    }
};


int main(int argn, char **argv)
{
    vector<int> nums;   
    vector<int> result;

    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(4);

    Solution solution;

   result = solution.twoSum(nums, 7);
 
   cout<<result[0]<<", "<<result[1]<<endl;
 
   return 0;
}
