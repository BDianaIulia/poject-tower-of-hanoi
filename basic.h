///\file basic.h
///\brief C library for implementation for the operations on plates.
///
///Created by Diana Bleoanca.
///Implements the functions that create the plate, push, pop, fill array and print the move.

struct plate * create_stack( struct plate* stack , char kind_of_plate[] );
void push( struct plate* stack, int new_story );
int pop( struct plate* stack );
void fill_array( struct plate * stack );
void print_the_move( char from_plate[], char to_plate[], int floor );
