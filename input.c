#include <stdio.h>
#include <stdlib.h>

int input()
{
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
