//VectorFloor.h: Returns the lowest value in the vector.

#pragma once
#include <vector>

using namespace std;

template <class type>
type VectorFloor( vector<type> xVector ) {
	type CurrentElement;
	type LowestElement = xVector.at( 0 );
	for ( int i=1; i<xVector.size(); i++ ) {
	//for each element in the array after the first...
		CurrentElement = xVector.at( i );
		if ( CurrentElement < LowestElement ) {
		//if the current element is less than the lowest element then...
			//Set the current element as the lowest element.
			LowestElement = CurrentElement;
		}
	}
	return LowestElement;
} 
