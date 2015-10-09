#ifndef __FNV1A_H__
#define __FNV1A_H__ 1

unsigned int fnv1a_hash32(const char *key, const char *end);
unsigned short fnv1a_hash16(const char *key, const char *end);

#endif
