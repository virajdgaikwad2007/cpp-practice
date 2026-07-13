#include <iostream>
using namespace std;

int main()
{
    int A[2][3];

    for(auto& x:A)
    {
        for(auto& y:x)
        {
            cin >> y ;
        }
        cout << "\n";
    }
    for(auto& x:A)
    {
        for(auto& y:x)
        {
            cout << y << " ";
        }
        cout << "\n";
    }
}