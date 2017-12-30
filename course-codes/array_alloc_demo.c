/* Simple example program to show use of the array_alloc routines */
/* Ian Bush, 2010 for SESG6025 */

#include <stdio.h>
#include <stdlib.h>

#include "array_alloc.h"

#define NROWS 3
#define NCOLS 5

int main( void ) {

  float **array_float;
  char  **array_char;

  double ***t;

  int i, j, k;

  /* First we will deal with a two dimensional array of floats */

  /* Allocate a NROWS by NCOLS array */
  array_float = alloc_2d_float( NROWS, NCOLS );

  /* Check the allocation worked */
  if( array_float == NULL )
    /* It failed! Exit the program */
    exit( EXIT_FAILURE );

  /* Zero the array - this shows how to access the elements */
  for( j = 0; j < NROWS; j++ ) 
    for( i = 0; i < NCOLS; i++ ) 
      array_float[ j ][ i ] = 0.0;

  /* Print out the adress of each element of array 
     Note how the 4 byte floats are contiguous in memory */
  printf("Addresses of the elements of the %i by %i two dimensional array:\n",
	  NROWS, NCOLS );
  for( j = 0; j < NROWS; j++ ) 
    for( i = 0; i < NCOLS; i++ ) 
      printf( "a[ %i ][ %i ] is at %lu\n", j, i, 
	      ( unsigned long ) &( array_float[ j ][ i ] ) );
  printf( "Note that the %i byte floats are contiguous in memory\n", 
	  (int) sizeof( **array_float ) );
  printf( "\n" );

  /* Now do exactly the same, but this time with chars */

  /* Allocate a NROWS by NCOLS array */
  array_char = alloc_2d_char( NROWS, NCOLS );

  /* Check the allocation worked */
  if( array_char == NULL )
    /* It failed! Exit the program */
    exit( EXIT_FAILURE );

  /* Zero the array - this shows how to access the elements */
  for( j = 0; j < NROWS; j++ ) 
    for( i = 0; i < NCOLS; i++ ) 
      array_char[ j ][ i ] = 0.0;

  /* Print out the adress of each element of array 
     Note how the 1 byte chars are contiguous in memory */
  printf("Addresses of the elements of the %i by %i two dimensional array:\n",
	  NROWS, NCOLS );
  for( j = 0; j < NROWS; j++ ) 
    for( i = 0; i < NCOLS; i++ ) 
      printf( "a[ %i ][ %i ] is at %lu\n", j, i, 
	      ( unsigned long ) &( array_char[ j ][ i ] ) );
  printf( "Note that the %i byte chars are contiguous in memory\n", 
	  (int) sizeof( **array_char ) );
  printf( "\n" );


  /* Finally a 3 dimensional example */
  t = alloc_3d_double( 2, 3, 4 );
  if( t == NULL )
    exit( EXIT_FAILURE );
  printf( "Addresses of the elements ");
  printf( "of the %i by %i by %i three dimensional array of doubles:\n",
	  2, 3, 4 );
  for( k = 0; k < 2; k++ )
    for( j = 0; j < 3; j++ )
      for( i = 0; i < 4; i++ )
	printf( "a[ %i ][ %i ][ %i ] is at %lu\n", k, j, i, 
		( unsigned long ) &( t[ k ][ j ][ i ] ) );

  return EXIT_SUCCESS;
}
