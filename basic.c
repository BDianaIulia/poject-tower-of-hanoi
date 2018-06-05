///\file basic.c
///\brief C library implementation for the operations on plates.
///
/// Created by Diana Bleoanca.
/// Implements the functions that create the plate, push, pop, fill array and print the move

#include <stdio.h>
#include <stdlib.h>
#include <string.h> // for strcpy

#include "struct.h" // for the global structures
#include "input.h" // for function input()

struct plate * create_stack( struct plate* stack , char kind_of_plate[] )
{
    ///\fn void create_stack(struct plate* stack, char kind_of_plate[])
    ///\brief Returns the created structure
    ///\param stack - the structure that needs to be created
    ///\param kind_of_plate - the name of plate
    ///
    ///Create a new structure, allocating memory for one structure
    ///top is -1 -> empty array
    ///Allocate space ( = no_of_stories ) for the stories.
    ///Put on field name the name of plate
    int no_of_stories = input(); //total number of stories
    stack = ( struct plate* ) malloc( sizeof( struct plate ));
    stack -> top = -1;
    stack -> array = ( int* ) malloc( no_of_stories * sizeof( int ));
    strcpy( stack -> name, kind_of_plate );

    return stack;
}

void push( struct plate* stack, int new_story )
{
    ///\fn void push(struct plate* stack, int new_story)
    ///\brief Add on plate the new story.
    ///\param stack - the plate when I need to push the new story
    ///\param new_story - the new floor to be added
    ///
    ///Increase the top by 1.
    ///After that , push the new story at position top in the array.
    stack -> top++;
    stack -> array[ stack -> top ] = new_story;
}

int pop( struct plate* stack )
{
    ///\fn void pop( struct plate* stack)
    ///\brief Returns the last element from the array.
    ///\param stack - the structure that needs to be adjusted.
    ///
    ///If the top = -1 => the plate is empty
    ///After returns the last element from the array, decreases the top by 1.
    if( stack -> top == -1 )
    {
        return 0;
    }

    return stack -> array[stack -> top--];
}

void fill_array( struct plate * stack )
{
    ///\fn void fill_array( struct plate* stack)
    ///\brief This function fills the silver plate for beginning.
    ///\param stack - the structure that needs to be adjusted.
    ///
    ///Push all the stories in decreasing order.
    int iterator;
    int no_of_stories = input(); // total number of stories
    for( iterator = no_of_stories ; iterator >= 1 ; iterator-- )
    {
        push( stack, iterator );
    }
}

void print_the_move( char from_plate[], char to_plate[], int floor )
{
    ///\fn void print_the_move( char from_plate[], char to_plate[], int floor )
    ///\brief displays the move
    ///\param from_plate - the plate of the story is moved from
    ///\param to_plate - the plate of the story when is moved
    ///\param floor - the number of the story
    ///
    printf( "Move floor %d from %s to %s\n", floor, from_plate, to_plate );
}
