/**
* \file moves.h
* @brief C header for generating the movements.

* @author Diana Bleoanca.
* Implements the functions that choose the legal movement
    and the main algorithm for all moves.
*/

void move_from_plate( struct plate *from_plate, struct plate *to_plate );
void tower_of_Hanoi( struct plate *from_plate, struct plate *aux_plate, struct plate *to_plate );
