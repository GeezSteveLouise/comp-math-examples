#include <math.h>
#include <stdio.h>
#define sq_add(a,b) a += (b << 1) + 1;

/** Calculate squares of natural numbers. Array indexing starts at 0, so start==0 will calc 1*1.  */
void print_sequence_squares(long long unsigned start, long long unsigned stop)
{
    long long unsigned this_one = start * start;
    for( ; start <= stop; start++)
    {
        sq_add(this_one, start)
        printf("%d times %d is: %d\n", start+1, start+1, this_one);
    }
}

void sequence_squares(long long unsigned start, long long unsigned stop)
{
    long long unsigned this_one = start * start;
    for( ; start <= stop; start++)
    {
        sq_add(this_one, start)
    }
}

// write the form x * x
/** Calculate squares of natural numbers. Array indexing starts at 0, so start==0 will calc 1*1.  */
void print_flat_squares(long long unsigned start, long long unsigned stop)
{
    for( ; start <= stop; )
    {
        start++;
        long long unsigned this_one = start * start;
        printf("%d times %d is: %d\n", start, start, this_one);
    }
}

void flat_squares(long long unsigned start, long long unsigned stop)
{
    for( ; start <= stop; )
    {
        start++;
        long long unsigned this_one = start * start;
    }
}
// write the print form of the above.

// Implement GNU Multipe Precision Library