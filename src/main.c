#include "core.h"
#include <stdio.h>
int main(){
printf("kernel-8086 v1.0.0\n");
printf("Minimal x86 protected-mode kernel with multitasking and virtual memory\n");
kernel_8086_init();
kernel_8086_process(NULL,0);
kernel_8086_shutdown();
return 0;
}
