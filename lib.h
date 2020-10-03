
#include <time.h>
#include <stdlib.h>

int random(int _max, int _Offset)
{
    srand(time(NULL));
    int n = rand() % _max - _Offset;
    return n;
}