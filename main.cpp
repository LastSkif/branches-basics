#include <math.h>
#include <stdio.h>
#include <stdlib.h>

main()
{
    int a[10], i, sum = 0;
    for (i = 0; i < 10; i++) {
        scanf("%d", a[i]);
        sum += a[i];
    }

    return 0;
}
