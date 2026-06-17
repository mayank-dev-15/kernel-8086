#ifndef KERNEL_8086_H
#define KERNEL_8086_H
#include <stdint.h>
void kernel_8086_init(void);
void kernel_8086_shutdown(void);
int kernel_8086_process(const void *data, size_t len);
#endif
