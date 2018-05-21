

struct plate * create_stack( struct plate* stack , char kind_of_plate[] );
void push( struct plate* stack, int new_story );
int pop( struct plate* stack );
void fill_array( struct plate * stack );
void print_the_move( char from_plate[], char to_plate[], int floor );
