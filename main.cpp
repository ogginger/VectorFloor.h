//main.cpp: Entrypoint for the VectorFloor function.

#include "VectorFloor.h"
#include <vector>
#include <iostream>

using namespace std;

int main() {
	vector<int> xIntArray = { 5,4,3,2,1 };
	int nResult = VectorFloor<int>( xIntArray );
	cout << nResult << endl;
	return 0;
}
