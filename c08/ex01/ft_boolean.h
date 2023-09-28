#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

#define SUCCESS 0

#define TRUE 1
#define FALSE 0

#define EVEN_MSG "I have an even number of arguments."
#define ODD_MSG "I have an odd number of arguments."

#define t_bool int

t_bool EVEN(int number)
{
    return !(number % 2);
}

#endif
