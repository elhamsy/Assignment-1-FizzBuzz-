//
//  main.c
//  Assignment 1 "FizzBuzz"
//
//  Created by Elham on 1/6/17.
//  Copyright © 2017 Elham. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   /*Assignment 1: FizzBuzz
    Write a program that prints the numbers from 1 to 100. For the multiples of 3, print "Fizz" instead of the number and for the multiples of 5, print "Buzz" instead of the number. For numbers which are multiples of both 3 and 5 print "FizzBuzz"*/
    
 
    int a=3;
    int b= 5;
       for (int i = 1; i<=100; i++)
    {
        if (i%b==0 && i%a==0)
        {
            printf("FizzBuzz\n");
        }
        else if (i%a==0)
        {
            printf("Fizz\n");
        }
        else if (i%b==0)
        {
            printf("Buzz\n");
        }
        else
        {
            printf("%d\n", i);
        }
    }
   
    return 0;
}
