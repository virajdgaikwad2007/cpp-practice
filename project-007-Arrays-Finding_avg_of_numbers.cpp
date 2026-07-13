#include <iostream>
using namespace std;

int main()
{
    int n,i;
    float avg , A[100],sum=0.0;

    cout<<"Enter the number of elements: ";
    cin >> n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter element " << i+1 << " : ";
        cin >> A[i];
        sum+=A[i];
        cout << endl;
    }
    avg=sum/n;
    cout << "Average of all elements is: " << avg;
}