#include <stdio.h>
#include <malloc.h>

int populate( int* array ) {
	int i ;
	i = 0 ;
	scanf( "%d",array+i ) ; 
	while( *(array+i) != -1 ) {
			scanf( "%d",array+(++i) ) ;
	}
	

	return i-1 ;

}

void isSorted( int* array,int size ){
	int i = 0 ;
	for( i = 0 ; i < size-1 ;i++ ) {
		if( array[i] > array[i+1] ){
			printf("Array is not sorted\n") ;
			break ;
		}
	}
}
void print_array( int* array,int size ) {
	int i ;
	for( i = 0 ; i < size ; i++ ) {
		printf("%d ",array[i] ) ;
	}
	printf("\n") ;

}

void swap( int* array,int i1,int i2 ) {
	int temp = array[i1] ;
	array[i1] = array[i2] ;
	array[i2] = temp ;
}
void selection_sort( int* array,int size ) {
	int i,j ;
	int N = size ;
	int max_index  ;
	for( i = N-1 ; i >= 0 ; i-- ) {
		max_index = i ;
		for( j = 0 ; j < i ; j++ ) {
			if( array[ j ] > array[ max_index ] ) {
				max_index = j ;
			}
		}
		//swap
		swap( array,max_index,i ) ;
	}




}
int main( int argc,char** argv ) {

	int* array = ( int* )malloc( sizeof( int ) * 1000 ) ;
	int size = populate( array ) ;
	printf("size is : %d\n", size ) ;
	printf("The original array is :\n") ;
	print_array(array,size ) ;
	printf("\n\nThe sorted array is : \n") ;
	selection_sort( array,size ) ;
	print_array( array,size ) ;
	isSorted( array,size ) ;
	return 0 ;
}
