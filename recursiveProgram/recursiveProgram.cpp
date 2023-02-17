#include "recursiveProgram.h"

int binarySearch(int lookFor, int arrayIn[], int start, int end)
{
    int midpoint = (start + end) / 2;
    if (start <= end)
    {
        if (arrayIn[midpoint] == lookFor)
        {
            return midpoint + 1;
        }

        else if (arrayIn[midpoint] < lookFor)
        {
            start = midpoint + 1;
            return binarySearch(lookFor, arrayIn, start, end);
        }

        else if (arrayIn[midpoint] > lookFor)
        {
            end = midpoint - 1;
            return binarySearch(lookFor, arrayIn, start, end);
        }
    }

    return 0;
}