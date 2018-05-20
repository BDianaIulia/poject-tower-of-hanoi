#include <stdio.h>
#include <stdlib.h>

#include "struct.h"

struct plate * create_stack( struct plate* stack, int no_of_stories )
{
    stack = ( struct plate* ) malloc( sizeof( struct plate ));
    stack -> top = -1;
    stack -> array = ( int* ) malloc( no_of_stories * sizeof( int ));

    return stack;
}

void push( struct plate* stack, int new_story )
{
    stack -> top++;
    stack -> array[ stack -> top ] = new_story;
}

int pop( struct plate* stack )
{
    if( stack -> top == -1 )
    {
        return 0;
    }

    return stack -> array[stack -> top--];
}

void fill_array( struct plate * stack , int no_of_stories )
{
    int iterator;
    for( iterator = no_of_stories ; iterator >= 1 ; iterator-- )
    {
        push( stack, iterator );
    }
}

void print_the_move( char silver_plate, char golden_plate, int floor )
{
    printf( "Move floor %d from %c to %c\n", floor, silver_plate, golden_plate );
}
