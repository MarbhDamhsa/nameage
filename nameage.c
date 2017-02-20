/*          nameage.c
*               by: Jay Mendelsohn
*                   February 20, 2017
*
*    Description: The program asks the user for their name and age
*    and then produce a message indicating how old they will be next year
*
*/

#include <stdio.h>

int main(void)
{
    int age;
    char[] name;

    printf("Welcome to nameage\n\n");
    printf("Please enter name: ");
    scanf("%s", &name);
    printf("Please enter your age: ");
    scanf("%d", &age);

    printf("Hi %s! ", name);
    if(age < 67)
    {
        printf("You have %d years before you retire", (67 - age));
    }
    else if(age == 67)
    {
        printf("You should retire.");
    }
    else
    {
        printf("You should have retired already!");
    }

    printf("\nThank you for using nameage. Bye!");

    return 0;
}
