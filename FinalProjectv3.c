#include <stdio.h>
#include <string.h>

int lineNumber;
static const char filename[] = "Student.txt";

int function (int lineNumber) 
{
    FILE *file = fopen (filename, "r");

    int count = 0;
    if (file != NULL)
    {   
        char line [250];
        while (fgets(line, sizeof line, file) != NULL)
        {   
            if (count == lineNumber)
            {   
            printf("%s", line);
            fclose(file);
            return 0;
            }   
            else
            {   
                count++;
            }   
        }   
        fclose(file);
    }   
    return 0;
}

typedef struct
{
    char student_name [50];
    int student_age;

} Student;

int main()
{
    int grade, grade_a;
    int line = 0;
    char count;
    char a [500];

    char student;
    int num, c, b = 10;
	
	Student r[b];

        printf ( "Students Information\n");

    for (c = 0; c < b; c++)
		{
            printf("\n*******************");
            printf ("\nStudent ID #%d \n", c + 1);

            printf ("Name: ");
            scanf ("%s", r[c].student_name);
            scanf ("%c", &student);
			
			printf ("Age: ");
			scanf ("%d", &r[c].student_age);
			scanf ("%c", &student);
        }

    FILE *ffp;

    ffp = fopen ("Student.txt", "r");
    if (ffp == NULL)
    {
        printf ("error v2");
    }

        printf("\n*******************");
        printf("\n*******************");
        printf ("\nFinal Average\n");
                
        puts ("\nAverage:");
        printf ("1 - Students who got 90 - 100\n");
        printf ("2 - Students who got 80 - 89\n");
        printf ("3 - Students who got 70 - 79\n");
        printf ("4 - Exit\n");

    do
    { 
        printf("\n**************************");
        printf("\nChoose an Average: ", grade_a);
        scanf("%d", &grade_a);
        printf("**************************\n");
            
            switch (grade_a)
            {   
                case 1: // 90 - 100 
                printf ("\nStudents who got 90 - 100: \n");
                printf ("ID# \tName \tAverage\n");
                // #1 Athy 99 
                // #7 Caye 96 
                // #2 Aria 95
                // #5 Aelin 95
                // #10 Feyre 94
                function (0);    
                function (6);
                function (1);
                function (4);    
                function (9);             
            break;

            case 2: //  80 - 89 
                printf ("\nStudents who got 80 - 89: \n");
                printf ("ID# \tName \tAverage\n");
                // #6 Juvel 89
                // #9 Nesta 87
			    function (5);
			    function (8);
            break;

            case 3: // 70 - 79 
                printf ("\nStudents who got 70 - 79: \n");
                printf ("ID# \tName \tAverage\n");
                // #8 Miel 79 
                // #4 Jenny 76  
                // #3 Lili 74
                function (7);
			    function (3); 
                function (2);
            break;
    
            default:
                printf ("\nSystem Exiting.\n");
                break;
            }
    }
    while (grade_a != 4);

    printf ("TOP 3 Highest Average");
    printf ("ID# \tName \tAverage\n");

    strcat (line);

    printf ("%s \t%s \t%s\n", function (0), function (6), function (1));

    fclose (ffp); 

    


}