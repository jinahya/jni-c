#include "com_github_jinahya_array.h"
#include "com_github_jinahya_native.h"
#include <stdio.h>
#include <stdlib.h> // malloc
#include <string.h> // memcpy

int array_reverse_ol(void * array, const size_t offset, const size_t length, const size_t size) {
  printf("IS_BIG_ENDIAN: %d\n", IS_BIG_ENDIAN);
  printf("IS_BIG_ENDIAN: %d\n", IS_BIG_ENDIAN);
  printf("IS_BIG_ENDIAN: %d\n", IS_BIG_ENDIAN);
  printf("IS_BIG_ENDIAN: %d\n", IS_BIG_ENDIAN);
  printf("IS_BIG_ENDIAN: %d\n", IS_BIG_ENDIAN);
  printf("IS_BIG_ENDIAN: %d\n", IS_BIG_ENDIAN);
  //printf("array_reverse_ol(%p, %zu, %zu, %zu)\n", array, offset, length, size);
  void * temp = malloc(size);
  if (temp == NULL) {
    fprintf(stderr, "failed to allocate; size(%zu)\n", size);
    return EXIT_FAILURE;
  }
  size_t s = (offset + 0) * size; // start
  size_t e = (length - 1) * size; // end
  while (s < e) {
    memcpy(temp, (char *) array + s, size);
    memcpy((char *) array + s, (char *) array + e, size);
    memcpy((char *) array + e, temp, size);
    s += size;
    e -= size;
  }
  free(temp);
  return EXIT_SUCCESS;
}

char * array_from_value(const void * value, const size_t size) {
  char * array = malloc(size);
  if (array != NULL) {
    memcpy(array, value, size);
  }
  return array;
}

char * array_from_value_be(const void * value, const size_t size) {
  char * array = array_from_value(value, size);
  if (array != NULL && !IS_BIG_ENDIAN) {
    array_reverse_ol(array, 0, size, sizeof (char));
  }
  return array;
}

char * array_from_value_le(const void * value, const size_t size) {
  char * array = array_from_value(value, size);
  if (array != NULL && IS_BIG_ENDIAN) {
    array_reverse_ol(array, 0, size, sizeof (char));
  }
  return array;
}