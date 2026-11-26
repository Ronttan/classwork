#include <stdio.h>

int main()
{
    int i;
    float fact;
    fact = 2;
    i = 1;
    do
    {
        i = i + 1;
        fact = fact * i;
    } while(i <= 10);
    
    printf("%f\n", fact);
    
    return 0;
}