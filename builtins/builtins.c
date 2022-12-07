#include "../shell.h"

struct builtin_s builtins[] =
{
    { "dump"    , dump       },{ "cd"    , cd       },{ "loop"    , loop       },
};

int builtins_count = sizeof(builtins)/sizeof(struct builtin_s);
