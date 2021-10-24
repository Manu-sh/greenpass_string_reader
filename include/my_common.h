#pragma once

#ifdef CHUNK
    #error "CHUNK ALREADY DEFINED"
#else
    #define CHUNK 16384
#endif

#if 0
    #define ARRAY_STACK_LENGTH(_A_) (sizeof (_A_) / sizeof *(_A_))
#endif