#include "hash_tables.h"

/**
 * hash_djb2 - function implementing the djb2 algorithm
 * @str: string to use
 *
 * Retur: hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int d;

    hash = 5381;
    while ((d = *str++))
    {
        hash = ((hash << 5) + hash) + d;
    }
    return (hash);
}
