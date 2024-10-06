//add include statements
#include "func.h"

using std::cout; using std::cin;
//add function code here
double get_gc_content(const string &dna)
{  
    auto gc_count = 0;

    for (char base : dna) //Iterates over each character in the dna string.
    {
        if (base == 'C' || base == 'G')
        {
            gc_count++;
        }
    } 
    return static_cast<double>(gc_count) / dna.length();
}

string get_reverse_string(string dna)
{
    string reversed = "";
    for (int i = dna.length() - 1; i >= 0; --i)//Loop through the input string dna from the end to the beginning.
    {
        reversed += dna[i];
    }
    return reversed;
}

string get_dna_complement(string dna)
{
    string complement = get_reverse_string(dna);
    
    for (char &base: complement) //Modify the original characters in the complement string.
    {
        switch (base)
        {
            case 'A':
                base = 'T';
                break;

            case 'T':
                base = 'A';
                break;

            case 'C':
                base = 'G';
                break;

            case 'G':
                base = 'C';
                break;
        }
    }
    return complement;
}