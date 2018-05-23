#include <stdio.h>
#include <stdlib.h>

#include "basic.h"
#include "struct.h"

int no_of_stories = 20;

int main()
{
    struct plate * golden_plate = create_stack( golden_plate , "golden plate" );
    struct plate * silver_plate = create_stack( silver_plate , "silver plate" );
    struct plate * bronze_plate = create_stack( bronze_plate , "bronze plate" );

    fill_array( silver_plate );

    tower_of_Hanoi( silver_plate, bronze_plate, golden_plate );

    return 0;
}
