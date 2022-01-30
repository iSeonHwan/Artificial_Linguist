/*
define: example code of dictionary in cpp.
date: 2022. 1. 30.
source: https://stackoverflow.com/questions/15151480/simple-dictionary-in-c
*/

#include <iostream>
#include <map>

typedef std::map<char, char> BasePairMap; // typedef is function to creates an alias that can be used anywhere in place of a (possibly complex) type name.

int main()
{
    BasePairMap m;
    m['A'] = 'T';
    m['T'] = 'A';
    m['C'] = 'G';
    m['G'] = 'C';

    std::cout << "A:" << m['A'] << std::endl;
    std::cout << "T:" << m['T'] << std::endl;
    std::cout << "C:" << m['C'] << std::endl;
    std::cout << "G:" << m['G'] << std::endl;

    return 0;
}