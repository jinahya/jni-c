#include "com_github_jinahya_array.h"
#include "com_github_jinahya_native.h"
#include <stdio.h>
#include <stdlib.h> // malloc
#include <string.h> // memcpy

int array_reverse(void * array, const size_t offset, const size_t length, const size_t size) {
  //printf("array_reverse(%p, %zu, %zu, %zu)\n", array, offset, length, size);
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

char * array_value(const void * value, const size_t size) {
  //printf("array_value(%p, %zu)\n", value, size);
  //printf("value: %llu\n", *(unsigned long long *) value);
  char * array = malloc(size);
  //printf("array allocated: %p\n", array);
  if (array != NULL) {
    //printf("memcpy-ing\n");
    memcpy(array, value, size);
    //printf("memcpy-ed\n");
  }
  return array;
}

char * array_value_be(const void * value, const size_t size) {
  //printf("array_value_be(%p, %zu)\n", value, size);
  char * array = array_value(value, size);
  //printf("array: %p\n", array);
  if (array != NULL && !IS_BIG_ENDIAN) {
    array_reverse(array, 0, size, sizeof (char));
  }
  return array;
}

char * array_value_le(const void * value, const size_t size) {
  char * array = array_value(value, size);
  if (array != NULL && IS_BIG_ENDIAN) {
    array_reverse(array, 0, size, sizeof (char));
  }
  return array;
}