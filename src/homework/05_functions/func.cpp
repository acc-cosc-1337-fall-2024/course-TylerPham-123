//add include statements
#include "func.h"

using std::cout; using std::cin;
//add function code here
double get_gc_content(const string &dna)
{  
    auto gc_count = 0;

    for (char base : dna)
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
    string reversed = dna;
    int left = 0;
    int right = reversed.length() - 1;

    while (left < right)
    {
        std::swap(reversed[left], reversed[right]);
        left++;
        right--;
    }
    return reversed;
}

string get_dna_complement(string dna)
{
    string complement = get_reverse_string(dna);
    
    for (char &base: complement)
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