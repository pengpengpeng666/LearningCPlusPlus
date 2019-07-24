#include<iostream>
#include<vector>

using namespace std;

static void printIntVector(vector<int> &nums)
{
    int i;

    if (nums.size() ==0) {
        cout<<"ERROR: empty vector"<<endl;
        return;
    }

    for (i=0; i<nums.size()-1; i++) {
        cout<<nums[i]<<", ";
    }
    cout<<nums[i]<<endl;
}


int main(int argn, char **argv)
{
    vector<int> nums;

    for (int i=0; i<10; i++) {
        nums.push_back(i);
    }

    printIntVector(nums);

    cout<<endl;

    for (int i=0; i<5; i++) {
        nums.pop_back();
    }

    printIntVector(nums);

    return 0;
}
