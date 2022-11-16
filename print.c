#include"header.h"


void print_data()
{
system("clear");
sll *ptr=headptr;
int i;
     for(i=0;i<14;i++)
     printf("\n");
    printf("\033[4;1;36m...........................................STUDENT RECORD ...........................................\033[0m\n");
     printf("\n\n\n\n");
    if(ptr==0)
    {
        printf("\033[5;31;1m No data found...! \033[0m \n");
    usleep(10000);
    return;
    }
    printf("\033[1;35m ROLL NUMBER    NAME             MARKS \033[0m\n\n"); 
    while(ptr)
    {
       printf("\033[32m%d           %s               %g\033[0m\n",ptr->rollno,ptr->name,ptr->mark);
        ptr=ptr->next;
    }
    printf("\n\n\n Enter any digit to exit to main menu\n");
    int op;
scanf("%d",&op);

}




