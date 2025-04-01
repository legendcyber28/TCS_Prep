/* find the sum of first N natural number 
Example 1:
Input: N=5
Output: 15
Explanation: 1+2+3+4+5=15

Example 2:
Input: N=6
Output: 21
Explanation: 1+2+3+4+5+6=15
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long sum=0;      //TO avoid overflow condition you , can also use the int sum =0
    for(int i = 1; i<=n; i++)
    {
        sum+=i;
    }
    cout<<"The sum is " << sum;
    return 0;

}