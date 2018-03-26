//C code to output a desired number of integers from the fibonacci sequence in an ascending sequential order//

#include <stdio.h>
int GetInput (void) ;  //Function declaration - ask and capture the number of integers the user desires//
int Fibo(int MaxNum) ;  //Function declaration - generate and store the desired number of integers from Fibonacci Sequence//

main()
{
    int Fib;                    //Variable indicating i-th integer in Fibonacci Sequence//

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
