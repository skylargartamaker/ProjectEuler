/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6, and 9. The sum of these multiples is 23
Find the sum of all the multiples of 3 or 5 below 1000.
*/

//Psuedocode
/*
Loop from 0 to 1000
    If the current number modulus 3 or 5 is 0
        Add the current number to the sum
return the sum
*/

#include <iostream>

int main()
{
    double sum; 

    for(int i = 1; i < 1000; i++)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
            sum += i; 
        }
    }

    std::cout << sum << std::endl; 

    return 0;
}