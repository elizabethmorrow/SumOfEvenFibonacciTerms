/* 
 * File:   main.cpp
 * Author: eamorrow
 * 
 */

#include <cstdlib>
#include <cmath>
#include <iostream>

/*
 * Project Euler 2
 */

int SumOfFib(int sum, int a, int b)
{
    int nterm;
    while(nterm < 4000000)
    {
        nterm = a + b;
        if(nterm%2 == 0)
        {
            sum += nterm;
        }
        
        a = b;
        b = nterm;        
    }
    return sum;
}

int main(int argc, char** argv) {
    int a = 1;
    int b = 2;
    std::cout<<SumOfFib(2,a,b);
    return 0;
}

