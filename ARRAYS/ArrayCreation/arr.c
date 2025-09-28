#include <stdio.h>
int main()
{
    int LA[5]={}, i;
    //Assigning values to an array
    for(i=0; i<5; i++)
    {
        LA[i] = i + 1;
    }
    for(i=0; i<5; i++)
    {
        //Printing the elements in an array   
        printf("%d\n", LA[i]);
        //printf("LA[%d] = %d\n", i, LA[i]);
    }
    return 0;
}


