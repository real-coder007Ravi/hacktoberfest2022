/* real-coder007Ravi*/
/* Write a program to check a given number is palindrome or not.*/
#include <iostream>
using namespace std;
bool isPalindrome(int num)
{
    int temp = num;
    int rev = 0;
    while (temp > 0)
    {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }
    return rev == num;
}
int main()
{
    int num;
    cin >> num;
    cout << isPalindrome(num) << endl;
}