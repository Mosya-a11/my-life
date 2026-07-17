#include <unistd.h>

int main(void)
{
    write(1, "kitty\n", 5);
    return (0);
}
