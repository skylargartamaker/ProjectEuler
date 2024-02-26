/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 
9009 = 91 * 99

Find the largest palindrome made from the product of two 3-digit numbers
*/

/*
Psuedocode
Variable to store initial value = n
Variable to divide and store = number
Variable to store reverse number = reverse
Varible to get the smallest digit from a number = digit

Outter loop for int i < 999
    inner loop for int j < 999
        n = multiply i * j
        number = n
        While n != 0
            digit = number % 10;
            reverse = (reverse * 10) + digit
            number = number / 10

            if the original number is equal to the reverse number
                print the results to the screen

*/
#include <iostream>

void largestPalindrome(int largestNum);

int main()
{
    largestPalindrome(999);

    return 0; 
}

void largestPalindrome(int largestNum)
{
    int n, num, dig, rev; 
    int largestPal = 0; 

    for(int i = 1; i < largestNum; i++)
    {
        for(int j = 1; j < largestNum; j++)
        {
            n = i * j;
            num = n;
            rev = 0;

            do
            {
                dig = num % 10;
                rev = (rev * 10) + dig;
                num = num / 10;
            } while (num != 0);

            if(n == rev)
            {
                if(rev > largestPal)
                {
                    largestPal = rev;
                }
            }
            
        }
    }
    std::cout << largestPal << std::endl;
}