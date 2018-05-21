#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "struct.h"

extern int no_of_stories;

struct plate * create_stack( struct plate* stack , char kind_of_plate[] )
{
    stack = ( struct plate* ) malloc( sizeof( struct plate ));
    stack -> top = -1;
    stack -> array = ( int* ) malloc( no_of_stories * sizeof( int ));
    strcpy( stack -> name, kind_of_plate );

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

void fill_array( struct plate * stack )
{
    int iterator;
    for( iterator = no_of_stories ; iterator >= 1 ; iterator-- )
    {
        push( stack, iterator );
    }
}

void print_the_move( char from_plate[], char to_plate[], int floor )
{
    printf( "Move floor %d from %s to %s\n", floor, from_plate, to_plate );
}
