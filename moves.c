#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "basic.h"
#include "struct.h"
#include "input.h"

void move_from_plate( struct plate *from_plate, struct plate *to_plate )
{
    int top_first_plate = pop( from_plate );
    int top_second_plate = pop( to_plate );

    if( top_first_plate == 0 )
    {
        push( from_plate, top_second_plate );
        print_the_move( to_plate -> name , from_plate -> name , top_second_plate );
    }

    else if( top_second_plate == 0 )
        {
            push( to_plate, top_first_plate );
            print_the_move( from_plate -> name , to_plate -> name, top_first_plate );
        }
        else if( top_first_plate > top_second_plate )
            {
                push( from_plate, top_first_plate );
                push( from_plate, top_second_plate );
                print_the_move( to_plate -> name , from_plate -> name , top_second_plate );
            }
            else
            {
                push( to_plate, top_second_plate );
                push( to_plate, top_first_plate );
                print_the_move( from_plate -> name , to_plate -> name , top_first_plate );
            }
}


void tower_of_Hanoi( struct plate *from_plate, struct plate *aux_plate, struct plate *to_plate )
{
    long iterator;
    long total_no_of_moves;
    int no_of_stories = input();

    total_no_of_moves = (long) pow( 2 , no_of_stories ) - 1;

    for( iterator = 1; iterator <= total_no_of_moves; iterator++)
    {

        switch( iterator % 3 )
        {
            case( 1 ):{
                if( no_of_stories % 2 == 1 ){
                    move_from_plate( from_plate, to_plate );
                }else{
                    move_from_plate( from_plate, aux_plate );
                }
                break;
            }
            case( 2 ):{
                if( no_of_stories % 2 == 1 ){
                    move_from_plate( from_plate, aux_plate );
                }else{
                    move_from_plate( from_plate, to_plate );
                }
                break;
            }
            case( 0 ):{
                move_from_plate( aux_plate, to_plate );
                break;
            }
        }

    }
}
