#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(const std::string& str)
{
    averageGC = std::count("G", "C")/ str.length();

    return averageGC;
}

/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
std::string get_reverse_string(std::string str)
{
    str = 0;
    return 0;
}

/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

std::string get_dna_complement(std::string dna)
{
    reverse_string = get_reverse_string(dna)
    
}

