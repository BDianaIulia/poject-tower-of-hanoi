#include <stdio.h>
#include <stdlib.h>
#include "basic.h"

void move_from_plate( struct plate *from_plate, struct plate *to_plate , char silver_plate, char golden_plate )
{
    int top_first_plate = pop( from_plate );
    int top_second_plate = pop( to_plate );

    if( top_first_plate == 0 )
    {
        push( from_plate, top_second_plate );
        print_the_move( golden_plate, silver_plate, top_second_plate );
    }

    else if( top_second_plate == 0 )
        {
            push( to_plate, top_first_plate );
            print_the_move( silver_plate, golden_plate, top_first_plate );
        }
        else if( top_first_plate > top_second_plate )
            {
                push( from_plate, top_first_plate );
                push( from_plate, top_second_plate );
                print_the_move( golden_plate_plane, silver_plate, top_second_plate );
            }
            else
            {
                push( to_plate, top_second_plate );
                push( to_plate, top_first_plate );
                print_the_move( silver_plane, golden_plate, top_first_plate );
            }
}
