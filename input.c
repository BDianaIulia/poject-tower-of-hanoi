///\file input.c
///\brief C library implementation for importing data from a file, representing the input data.
///
/// Created by Diana Bleoanca.
/// Implements the function input.

#include <stdio.h>
#include <stdlib.h>

int input()
{
    ///\fn void input()
    ///\brief Returns the number of stories from the file
    ///
    ///Read from the file "input".
    ///If the path to file is not correct, display a message.
    ///Read the first integer from file.

    int no_of_stories;
    FILE *file_path = fopen( "input" , "r" );

    if( file_path == NULL )
    {
        printf( "No path found!" );
        return;
    }
    fscanf( file_path, "%d" , &no_of_stories );

    return no_of_stories;
}
