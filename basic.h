

struct plate * create_stack( struct plate* stack, int no_of_stories );
void push( struct plate* stack, int new_story );
int pop( struct plate* stack );
void fill_array( struct plate * stack, int no_of_stories );
void print_the_move( char silver_plate, char golden_plate, int floor );
