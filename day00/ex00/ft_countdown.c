#include <unistd.h>

int main(void)
{
    write(1, "321\n", 4);
    return (0);
}
