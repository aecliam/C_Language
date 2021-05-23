#include <stdio.h>
int main()
{
    char name [50];
    int num, grade, i, n = 10;

    FILE *ffp;

    ffp = fopen ("Student.txt", "w+");

    if (ffp == NULL)
    {
        printf ("error");
        return 0;
    }

        for (i = 0; i < n; i++)
        {
            fprintf (ffp, "#%d ", i + 1);
            scanf ("%s %d", &name, &grade);
            fprintf (ffp, "\t%s \t%d\n", name, grade);
        }
        
        fclose (ffp);
}