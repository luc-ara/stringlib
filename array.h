#ifndef ARRAY_H
#define ARRAY_H

#include <wchar.h>
#include <stddef.h>

//allocation
char *alloc_ca(size_t len) ;
wchar_t *alloc_wca(size_t len) ;


//conversion
wchar_t *convert_ca_to_wca(size_t len, char *ca, wchar_t *wca) ;
char *convert_wca_to_ca(size_t len, wchar_t *wca, char *ca) ;


//copying
char *copy_ca_to_ca(size_t len, char *ca) ;
wchar_t *copy_wca_to_wca(size_t len, wchar_t *wca) ;
char *copy_wca_to_ca(size_t len, wchar_t *wca) ;
wchar_t *copy_ca_to_wca(size_t len, char *ca) ;

#endif
