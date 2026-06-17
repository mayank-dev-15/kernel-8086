#include "core.h"
#include <stdio.h>
#include <string.h>
static int ready = 0;
void kernel_8086_init(void){ ready=1; printf("kernel-8086 init\n"); }
void kernel_8086_shutdown(void){ ready=0; }
int kernel_8086_process(const void *d, size_t l){ if(!ready)return -1; printf("Processing %zu bytes\n",l); return 0; }
