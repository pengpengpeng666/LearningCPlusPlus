#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


static void printIntVector(vector<int> &nums)
{
    int i;

    if (nums.size() == 0) {
        return;
    }

    for (i=0; i<nums.size()-1; i++) {
        cout<<nums[i]<<", ";
    }
    cout<<nums[i]<<endl;
}


int main(int argc, char **argv)
{
    vector<int> nums;

    nums.push_back(1);
    nums.push_back(100);
    nums.push_back(5);

    printIntVector(nums);
    
    sort(nums.begin(), nums.end());

    printIntVector(nums);

    reverse(nums.begin(), nums.end());

    printIntVector(nums);

   return 0;
}


