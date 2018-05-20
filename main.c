#include <stdio.h>
#include <stdlib.h>

#include "basic.h"
#include "struct.h"

int no_of_stories = 3;

int main()
{
    struct plate * golden_plate;
    struct plate * silver_plate;
    struct plate * bronze_plate;

    golden_plate = create_stack( golden_plate , no_of_stories );
    silver_plate = create_stack( silver_plate , no_of_stories );
    bronze_plate = create_stack( bronze_plate , no_of_stories );

    fill_array( silver_plate, no_of_stories );

    tower_of_Hanoi( no_of_stories, silver_plate, bronze_plate, golden_plate );

    return 0;
}
