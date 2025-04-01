/*Example 1:
Input: n=5
Output: odd
Explanation: 5 is not divisible by 2.

Example 2:
Input: n=6
Output: even
Explanation: 6 is divisible by 2.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "Even_no";
    }
    else
        cout << "Odd_no";

    return 0;
}