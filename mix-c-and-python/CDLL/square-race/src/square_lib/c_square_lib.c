#include <math.h>
#include <stdio.h>

/** Calculate squares of natural numbers. Array indexing starts at 0, so start==0 will calc 1*1.  */
void flat_squares(long long unsigned start, long long unsigned stop, int bool_print)
{
    for( ; start <= stop; )
    {
        start++;
        long long unsigned this_one = start * start;
        if(bool_print)    
            printf("%d times %d is: %d\n", start, start, this_one);
    }
}

/** Calculate squares of natural numbers. Array indexing starts at 0, so start==0 will calc 1*1.  */
void sequence_squares(long long unsigned start, long long unsigned stop, int bool_print)
{
    long long unsigned this_one = start * start;
    for( ; start <= stop; start++)
    {
        this_one += (start << 1) + 1;
        if(bool_print)    
            printf("%d times %d is: %d\n", start+1, start+1, this_one);
    }
}

// Implement GNU Multipe Precision Library