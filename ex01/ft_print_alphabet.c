#include <unistd.h>

int main(void)
{
    write(1, "abc\n", 4);
    return (0);
}
