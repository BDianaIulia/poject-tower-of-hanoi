///\file main.c
///\brief iterative implementation for tower of Hanoi.
///
/// Created by Diana Bleoanca.

#include <stdio.h>
#include <stdlib.h>

#include "basic.h" // for create_stack() and fill_array()
#include "struct.h" // for the global structure

int main()
{
    ///\fn int main()
    ///\brief Main function.
    /// Function calls of create_stack and fill_array imported from "basic.h"
    ///and tower_of_Hanoi from "moves.h" that is included is header "basic.h"
    struct plate * golden_plate = create_stack( golden_plate , "golden plate" );
    struct plate * silver_plate = create_stack( silver_plate , "silver plate" );
    struct plate * bronze_plate = create_stack( bronze_plate , "bronze plate" );

    fill_array( silver_plate );

    tower_of_Hanoi( silver_plate, bronze_plate, golden_plate );

    return 0;
}
