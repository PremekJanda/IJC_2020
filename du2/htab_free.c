/* 
 * htab_free.c
 * 
 * Řešení IJC-DU2, příklad 2)
 * Datum vytvoření: 5.4.2020
 * Autor: Tomáš Milostný, xmilos02, FIT VUT
 * Překladač: gcc (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0
 * Popis: Modul destruktoru - zrušení tabulky.
 */

#include <stdlib.h>
#include "htab.h"
#include "htab_types.h"

void htab_free(htab_t * t)
{
	htab_clear(t);
	free(t->ptr);
	free(t);
}