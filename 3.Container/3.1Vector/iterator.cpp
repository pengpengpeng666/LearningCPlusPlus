#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char **argv)
{
    vector<int> nums;

    for (int i=0; i<10; i++) {
        nums.push_back(i);
    }

    vector<int>:: iterator iter;

    for(iter=nums.begin(); iter!=nums.end(); iter++) {
        cout<<*iter<<" ";
    }
    cout<<endl;

    return 0;
}
