#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "basic.h"
#include "struct.h"

extern int no_of_stories;

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
    int iterator;
    int total_no_of_moves;
    char silver_plate = 'S';
    char golden_plate = 'G';
    char bronze_plate = 'B';

    // la 3 gogosi => 7 mutari ; la 4 gogosi => 15 mutari
    total_no_of_moves = pow( 2 , no_of_stories ) - 1;

    for( iterator = 1; iterator <= total_no_of_moves /*7 mutari pt 3 gogosi*/; iterator++)
    {
        if( iterator % 3 == 1 ){  //prima data se muta prima gogoasa de pe prima farfurie pe ultima
                                    //a 4-a oara se muta gogoasa 3 de pe prima farfurie pe ultima
                                    //a 7-a oara se muta gogoasa 1 de pe prima farfurie pe ultima
            move_from_plate( from_plate, to_plate );
        }
        else if( iterator % 3 == 2 ){  //a doua oara se muta  a doua gogoasa de pe prima farfurie pe a doua
                                        //a 5-a oara se muta gogoasa 1 de pe a 2-a farfurie pe prima
                move_from_plate( from_plate, aux_plate );
            }
            else if( iterator % 3 == 0 ){  //a treia oara se muta prima gogoasa de pe ultima farfurie pe a doua
                                            //a 6-a oara de muta gogoasa 2 de pe a 2-a farfurie pe ultima
                    move_from_plate( aux_plate, to_plate );
                }
    }
}
