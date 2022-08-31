#include <string.h>
#include <stdlib.h>

#include "array.h"

//allocation
char *alloc_ca(size_t len) {
  return calloc(len, sizeof(char)) ;
}
wchar_t *alloc_wca(size_t len) {
  return calloc(len, sizeof(wchar_t)) ;
}

//conversion
wchar_t *convert_ca_to_wca(size_t len, char *ca, wchar_t *wca) {
  for (int i = 0 ; i < len ; ++i) {
    wca[i] = (wchar_t) btowc((int) ca[i]) ;
  }

  return wca ;
}
char *convert_wca_to_ca(size_t len, wchar_t *wca, char *ca) {
  for (int i = 0 ; i < len ; ++i) {
    ca[i] = (char) wctob((wint_t) wca[i]) ;
  }

  return ca ;
}

//copying
char *copy_ca_to_ca(size_t len, char *ca) {
  char *copy ;
  return !(copy = alloc_ca(len)) ? NULL : memcpy(copy, ca, len) ;
}
wchar_t *copy_wca_to_wca(size_t len, wchar_t *wca) {
  wchar_t *copy ;
  return !(copy = alloc_wca(len)) ? NULL : wmemcpy(copy, wca, len) ;
}
char *copy_wca_to_ca(size_t len, wchar_t *wca) {
  char *copy ;
  return !(copy = alloc_ca(len)) ? NULL : convert_wca_to_ca(len, wca, copy) ;
}
wchar_t *copy_ca_to_wca(size_t len, char *ca) {
  wchar_t *copy ;
  return !(copy = alloc_wca(len)) ? NULL : convert_ca_to_wca(len, ca, copy) ;
}
