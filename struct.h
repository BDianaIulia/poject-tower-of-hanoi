///\file struct.h
///\brief C header that globally declares the structure.
///
///Created by Diana Bleoanca.


///structure with 3 field:
///one for the number of stories that is stocked on plate;
///a pointer for an integer array that keeps the stories;
///a sting that stores the name of plate.

struct plate
{
   int top;
   int *array;
   char name[30];
};
