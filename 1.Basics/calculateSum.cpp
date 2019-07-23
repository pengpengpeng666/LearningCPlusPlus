//The file is for exercising c++ language
//use "make calculateSum" to compile
//use "./calculateSum" to execute

#include<iostream>

using namespace std;


int main(int argn, char **argv)
{
    int x, y;
    
    cout<<"Please input first num:";
    cin>>x;
    cout<<"Please input second num:";
    cin>>y;

    cout<<x<<"+"<<y<<"="<<x+y<<endl;

    return 0;
}
