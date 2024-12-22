#include <math.h>
#include <stdio.h>

void print_sequence_squares(long long unsigned start, long long unsigned stop)
{
    long long unsigned this_one = start * start;
    for( ; start <= stop; start++)
    {
        printf("%d times %d is: %d\n", start, start, this_one);
        this_one += start;
        this_one += start+1;
    }
}

void sequence_squares(long long unsigned start, long long unsigned stop)
{
    long long unsigned this_one = start * start;
    for( ; start <= stop; start++)
    {
        this_one += start;
        this_one += start+1;
    }
}