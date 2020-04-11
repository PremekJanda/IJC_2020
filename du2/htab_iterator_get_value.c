/* 
 * htab_iterator_get_value.c
 * 
 * Řešení IJC-DU2, příklad 2)
 * Datum vytvoření: 11.4.2020
 * Autor: Tomáš Milostný, xmilos02, FIT VUT
 * Překladač: gcc (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0
 * Popis: Vrací hodnotu, cíl musí existovat
 */

#include <stdlib.h>
#include "htab.h"
#include "htab_types.h"

htab_value_t htab_iterator_get_value(htab_iterator_t it)
{
	return it.ptr->data;
}