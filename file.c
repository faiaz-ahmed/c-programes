#include <stdio.h>
int main()
{
    FILE *fp = fopen("data.txt", "w");
    fprintf(fp, "Name: %s, Score: %d\n", "Alice", 90);
    return 0;
}
