#include <iostream>
#include "linked_list.h"

using namespace std;

int main(){
	linked_list l;

	l.append(1);
	l.append(2);
	l.append(3);
	l.append(4);

	l.show_list();

	cout << "data at index 1: " << l.get_data(4) << endl;

	l.set_data(1, 6);

	l.show_list();





	return 0;
}
