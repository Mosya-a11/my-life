#include <unistd.h>

int main(void)
{
    write(1, "Z\n", 2);
    return (0);
}
