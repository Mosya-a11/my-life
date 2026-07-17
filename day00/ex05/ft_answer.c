#include <unistd.h>

int main(void)
{
    write(1, "OK\n", 3);
    return (0);
}
