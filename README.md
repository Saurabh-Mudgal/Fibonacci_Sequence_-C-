# Fibonacci_Sequence_-C-
C code to generate a specific number of integers from the Fibonacci Sequence. 

//code begin//
{
#include <stdio.h>
int GetInput (void) ;  //Function declarations//
int Fibo(int MaxNum) ;  //Function declarations//

main()
{
    int Fib;                    //Variable indicating #th Fibonacci//

    Fib = GetInput();           //Runs function to get input//

    printf("Result for %dth number of fibonacci sequence = %d", Fib, Fibo(Fib));

    return 0;
}

int GetInput(void)
{
    int input;
    do{
            printf("Enter nth number of Fibonacci: ");
            scanf("%d", &input);
            if (input <=2)
                printf("Enter a number bigger than 2.");
    } while (input <=2);
    return input;
}

Fibo (int MaxNum)
{
    int a=1, b=1, result=0, Num;
    for(Num=3;Num<=MaxNum;Num++)
    {
        result = a+b;
        a=b;
        b=result;
    }
    return result;
}
}
//code finish//
