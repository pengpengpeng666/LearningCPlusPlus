#include<iostream>

using namespace std;


static void quickSortIteration(int *data, int begin, int end)
{
    int i, j, tmp, key;


    key = data[begin];
   
     while(true) {
        for (i=end; i>=begin; --i) {
             if (data[i] <= key) {
                 break;
             }
        }

        for (j=begin; j<=end; ++j) {
             if (data[j] >= key) {
                 break;
             }
        }

        if (i == j || data[i] == data[j]) {
             break;
        }


        tmp = data[i];
        data[i] = data[j];
        data[j] = tmp;

        for (i=0; i<=end; ++i) {
             cout<<data[i]<<" ";
        }
        cout<<endl;
    }

    if (i < end) {
        quickSortIteration(data, i+1, end);
    }
    if (i > begin) {
        quickSortIteration(data, begin, i-1);
    }
}


static void quickSort(int *data, int len)
{
    quickSortIteration(data, 0, len-1);    
}


int main(int argn, char **argv)
{
    int i;
    int len = 10;
    int data[len] = {9,4,9,5,9,7,1,9,3,9};

    quickSort(data, len);

    for (i=0; i<len; ++i) {
        cout<<data[i]<<" ";
    }
    cout<<endl;

    return 0;
}
