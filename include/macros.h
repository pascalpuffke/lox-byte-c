#pragma once

#include <stdlib.h>

#define __internal static inline

#define TODO()                                    \
    printf("TODO - %s:%d\n", __FILE__, __LINE__); \
    exit(1)

#define UNREACHABLE()                                    \
    printf("UNREACHABLE - %s:%d\n", __FILE__, __LINE__); \
    exit(1)
