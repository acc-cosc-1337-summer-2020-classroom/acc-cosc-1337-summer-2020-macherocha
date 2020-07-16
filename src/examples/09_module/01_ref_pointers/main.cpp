#include "ref_pointers.h"
#include<iostream>

int main() 
{
	int* valid_ptr = get_int_pointer();
	//lines of code
	delete valid_ptr;
	valid_ptr = nullptr;

	return 0;
}