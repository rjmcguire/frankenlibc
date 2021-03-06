#ifndef _SYS_TYPES_H_
#define _SYS_TYPES_H_

#include <stdint.h>

typedef uintptr_t size_t;
typedef intptr_t ssize_t;

typedef int pid_t;
typedef unsigned int uid_t;
typedef unsigned int gid_t;
typedef unsigned int mode_t;
typedef uint64_t dev_t;
typedef int32_t lwpid_t;
typedef int64_t off_t;
typedef uint64_t ino_t;
typedef uint32_t nlink_t;
typedef uint64_t blkcnt_t;
typedef uint32_t blksize_t;

typedef unsigned char u_char;
typedef unsigned short u_short, ushort;
typedef unsigned u_int, uint;
typedef unsigned long u_long, ulong;

typedef intptr_t register_t;

#endif
