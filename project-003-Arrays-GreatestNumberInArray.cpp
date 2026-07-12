#include <iostream>
using namespace std;

int main()
{
    int A[]={4,8,9,5,3};
    int max = 0;
    for(int i=0;i<5;i++)
    {
        if(A[i] > max)
        {
            max = A[i];
        }
    }
    //prints maximum of A[]={4,8,9,5,3} .
    cout << " Maximum of all array elements is " << max;
}