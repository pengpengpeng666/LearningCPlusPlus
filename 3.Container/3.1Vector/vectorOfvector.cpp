#include<iostream>
#include<vector>

using namespace std;


int main(int argc, char **argv)
{
    vector<vector<char> > chars(10, vector<char>(10));

    vector<vector<char> >:: iterator iter;
    vector<char>:: iterator sub_iter;
 
    for (iter=chars.begin(); iter!=chars.end(); iter++) {
        for (sub_iter=iter->begin(); sub_iter!=iter->end(); sub_iter++) {
            *sub_iter = '*';
        }
    }


    for (iter=chars.begin(); iter!=chars.end(); iter++) {
        for (sub_iter=iter->begin(); sub_iter!=iter->end(); sub_iter++) {
            cout<<*sub_iter<<" ";
        }
        cout<<endl;
    }

    return 0;
}
