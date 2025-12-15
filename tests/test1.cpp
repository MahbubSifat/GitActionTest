#include <bits/stdc++.h>

using namespace std;

bool isPositive (int n)
{
    return n > 0;
}


int main()

{


    assert(isPositive(1) == true);
    assert(isPositive(2) == true);
    assert(isPositive(3) == true);

    assert(isPositive(0) == false);
    assert(isPositive(-1) == false);
    assert(isPositive(-2) == false);

    return 0;
}
//here is my pipeline