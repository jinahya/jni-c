#include <stddef.h>

#ifndef COM_GITHUB_JINAHYA_ARRAY_H
#define COM_GITHUB_JINAHYA_ARRAY_H

#ifdef __cplusplus
extern "C" {
#endif

  int array_reverse(void *, const size_t, const size_t, const size_t);

  char * array_from_value(const void *, const size_t);
  char * array_from_value_be(const void *, const size_t);
  char * array_from_value_le(const void *, const size_t);

#ifdef __cplusplus
}
#endif

#endif /* COM_GITHUB_JINAHYA_ARRAY_H */