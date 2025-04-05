/* Check if a number is Palindrome or Not 
Example 1:
Input:N = 4554
Output:Palindrome Number
Explanation: The reverse of 4554 is 4554 and therefore it is palindrome number
Example 2:
Input:N = 7789
Output: Not Palindrome
Explanation: The reverse of number 7789 is 9877 and therefore it is not palindrome */

bool palindrome(int &N)
{
    int real = N;
    int rev=0;
    while(N>0)
    {
        int rem = N%10;
        rev = rev*10 + rem;
        N = N/10;
    }
    if(rev==real)
    {
        return true;
    }
    return false;

}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    bool check = palindrome(N);
    if(check)
    {
        cout<<"Palindrome ";
    }
    else
    {
        cout<<" Not Palindrome ";
    }
    return 0;
}