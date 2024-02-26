/*
The prime factors of 13195 are 5, 7, 13, and 29.

What is the largest prime factor of the number 600851475143?
*/

/*
Psuedocode

Outer loop while a possible factor is less than the number being passed
    If the input number divided by current possible factors remainder is 0
        output that number, it is a factor.
        divide the input number by current factor
    Else
        incriment the possible factor by 1

After all division if the input number is greater than 1, output it as it is also a factor
*/
#include <iostream>

void primeFactors(long long n);

int main()
{
    primeFactors(600851475143);

    return 0; 
}

void primeFactors(long long n)
{
    long long z = 2;
    
    while(z * z <= n)
    {
        if(n % z == 0)
        {
            std::cout << z << std::endl; 
            n /= z;
        }
        else
        {
            z++;
        }
    }

    if(n > 1) {
        std::cout << n << std::endl;
    }
}