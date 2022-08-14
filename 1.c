#include <stdio.h>
int main(void)
{
    char gender, qualification, enter;
    int year, salary;
    printf("If female press f, if male press m.\n");
    scanf("%c", &gender);
    printf("If graduate press g, if post graduate press p.\n");
    scanf("%c", &enter);
    scanf("%c", &qualification);
    printf("Input year of service: \n");
    scanf("%d", &year);
    if(gender=='m'){
        if(year>=10){
            if(qualification=='p'){
                salary = 15000;
            }
            else{
                salary = 10000;
            }
        }
        else{
            if(qualification=='p'){
            salary = 9000;
            }
            else{
                salary = 7000;
            }
        }

    }
    else{
        if(year>=10){
            if(qualification=='p'){
                salary = 16000;
            }
            else{
                salary = 11000;
            }
        }
        else{
            if(qualification=='p'){
            salary = 8000;
            }
            else{
                salary = 6000;
            }
        }
        }
    printf("Salary: %d", salary);
      return 0;
    }

