#include <unistd.h> // Include the header for setuid() and setgid()
void main() {
    setuid(0); // Set the user ID to 0 (root)
    setgid(0); // Set the group ID to 0 (root)
    system("my-app"); // run my-app
