#include <iostream>
#include <string>
#include <vector>
#include "linked_list.h"
#include "square.h"

using namespace std;

template<typename Compare>
const Compare & findMax( const vector<Compare> &a ){

	int maxIndex = 0;
	for (int i = 1; i < a.size(); ++i){
		if (a[ maxIndex ] < a[i])
		maxIndex = i;
	}
	return a[ maxIndex ];
}

int main(){


	vector<Square> v = {Square{3.0}, Square{2.0}, Square{2.5}};

	cout << "Largest Square: " << findMax(v) << endl;

	

	return 0;
}
