#pragma once
#include <iostream>

inline int g_failures = 0;

#define CHECK(cond)                                                    \
    do {                                                               \
        if (!(cond)) {                                                 \
            std::cerr << "FAIL linia " << __LINE__ << ": " #cond "\n"; \
            ++g_failures;                                              \
        }                                                              \
    } while (0)

#define CHECK_RESULT() (g_failures == 0 ? 0 : 1)