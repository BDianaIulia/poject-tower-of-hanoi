/**
* \file moves.c
* @brief C library implementation for generating the movements.

* @author Created by Diana Bleoanca.
* Implements the functions move_from_plate and tower_of_Hanoi
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h> //for function pow()

#include "basic.h" // for functions: pop(), push(), print_the_move() and fill_array()
#include "struct.h" // for the global structure
#include "input.h" // for input()

/**
* \fn void move_from_plate(struct plate *from_plate, struct plate *to_plate)
* \brief choosing the legal movement.
* @param from_plate - the source plate
* @param to_plate - the destination plate

* This function pops the last element from both plates.
    If one element is equal with 0 (the plate is empty), I take the other remaining story and put on the empty plate.
    Otherwise, choose which element are greater, then push both elements on the other plate, in decreasing order.
*/
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
/**
* \fn void tower_of_Hanoi( struct plate *from_plate, struct plate *aux_plate, struct plate *to_plate )
* \brief implements the movement.
* @param from_plate - the source plate
* @param aux_plate - the auxiliary plate
* @param to_plate - the destination plate

* The total number of stories is equal with 2 to power the number of stories - 1.
    Iterating from 1 to total no of moves, this function chooses the case.
    If number_of_story is even, the interchange to_plate with aux_plate.
    Since there are 3 circular cases, I use modulo 3.
*/

void tower_of_Hanoi( struct plate *from_plate, struct plate *aux_plate, struct plate *to_plate )
{

    long iterator;
    long total_no_of_moves;
    int no_of_stories = input(); //total number of stories

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
