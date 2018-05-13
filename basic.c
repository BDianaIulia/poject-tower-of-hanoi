#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

void createStack( struct plate* stack, int no_of_stories )
{
    stack = ( struct plate* ) malloc( sizeof( struct Stack ));
    stack -> top = -1;
    stack -> array = (int*) malloc( no_of_stories * sizeof(int));
}

void push( struct plate *stack, int no_of_stories, int new_story )
{
    if( stack -> top == no_of_stories - 1 )
    {
        printf( "The plate is full\n" );
        return;
    }

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

void print_the_move( char silver_plate, char golden_plate, int floor )
{
    printf( "Move floor %d from %c to %c\n", floor, silver_plate, golden_plate );
}
