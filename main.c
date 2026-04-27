#include <stdio.h>
#include <stdlib.h>

// Recursively print odd numbers from start to end
void printOddNumbers(int start,int end)
{
    if(start<=end)
    {
        printf("%d\n",start);
        printOddNumbers(start+2,end);
    }
}


int main()
{
    int n,adjusted;

    printf("Enter a number:");
    scanf("%d",&n);

    // If n is even use n-1 to start from an odd number
    if(n%2==1)
    {
        adjusted=n;
    }
    else
    {
        adjusted=n-1;
    }
    printOddNumbers(1,adjusted);

    return 0;
}
