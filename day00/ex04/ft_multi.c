#include <unistd.h>

int main(void)
{
    write(1, "GO\n", 3);
    write(1, "WIN\n", 4);
    return (0);
}
