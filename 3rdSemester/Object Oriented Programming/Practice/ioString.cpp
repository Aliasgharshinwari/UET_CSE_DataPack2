#include <stdio.h>
int main()
{
    char *p[3] = {"Charles", "Tim", "Peter"};
    int age[3] = {21, 5, 12}, i;
    for (i=0; i<3; i++)
        printf("%-12s%3d\n", p[i], age[i]); // left align
    return 0;
}
