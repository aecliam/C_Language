#include <stdio.h>

typedef struct
{
    char student_name [50];
    int student_age;

} Student;

int main ()
{
    char student;
    int num, a, b = 10;

    FILE *ffpp;
    
    ffpp = fopen ("Students2.txt", "w+");

    if (ffpp == NULL)
    {
        printf ("error");
        return 0;
    }
	
	Student r[b];

        printf ( "Students Information\n");

    for (a = 0; a < b; a++)
		{
            printf("\n*******************");
            printf ("\nStudent #%d \n", a + 1);

            printf ("Name: ");
            scanf ("%s", r[a].student_name);
            scanf ("%c", &student);
			
			printf ("Age: ");
			scanf ("%d", &r[a].student_age);
			scanf ("%c", &student);
        }

    // fprint

            fprintf (ffpp, "ID# \tName \tAge\n");

    for (a = 0; a < b; a++)
		{
            fprintf (ffpp, "#%d ", a + 1);
            fprintf (ffpp, "\t%s \t%d\n", r[a].student_name, r[a].student_age);
            
        }    
}