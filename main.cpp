#include <bits/stdc++.h>

using namespace std;

bool isPositive (int n)
{
    return n > 0;
}


int main()

{


    int x;
    cout << "Enter a number : ";
    cin >> x;

    if (isPositive(x))
    {
        cout << "The number is positive" << endl;
    }
    else
    {
        cout << "The number is not positive" << endl;
    }

    return 0;
}