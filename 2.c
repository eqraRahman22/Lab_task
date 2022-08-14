#include <stdio.h>
int main(void)
{
    char married, gender, enter, insured;
    int age;
    printf("If married press y, if unmarried press n ");
    scanf("%c", &married);
    if(married=='y'){
        printf("Ensured.");
    }
    else{
    printf("If female press f, if male press m.\n");
    scanf("%c", &enter);
    scanf("%c", &gender);
    printf("Input age: ");
    scanf("%d", &age);
        if(gender=='m'){
            if(age>30)
                printf("Ensured.");
            else
                printf("Not Ensured.");
        }
        else{
            if(age>25)
                printf("Ensured.");
            else
                printf("Not Ensured.");

        }
    }

return 0;
}
