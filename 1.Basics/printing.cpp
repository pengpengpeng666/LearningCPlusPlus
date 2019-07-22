//The file is for exercising printing things by c++
//use "make printing" to compile
//use "./printing [name]" to execute

#include<iostream>

using namespace std;


int main(int argn, char **argv)
{
    if (argv[1] != NULL) {
        cout<<"Hello "<<argv[1]<<"!"<<endl;
    } else {
        cout<<"Hello world!"<<endl;
    }

    return 0;
}
