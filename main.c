#include"header.h"
int roll=1;
sll *headptr=0;
void main()
{
    int i,count;
    char op;

    read_file();  //load record
    
    while(1)
    {
    system("clear");
     for(i=0;i<14;i++)
     printf("\n");
    for(i=0;i<150;i++)
    printf("\033[33m.\033[0m");
    printf("\n");
    printf("\033[4;1;36m...............................................................STUDENT RECORD MAIN MENU..............................................................\033[0m\n");
        printf("\033[32m\n\ta/A : Add new record\n\td/D : Delete a record\n\ts/S : Show the list\n\tm/M : Modify a record\n\tc/C : Count records\n\tv/V : Save\n\te/E : Exit\n\tt/T : Sort the list\n\tl/L : Delete all the rocords\n\tr/R : Reverese the list\033[0m\n");
   
     printf("\n\n\n\n");
  for(i=0;i<150;i++)
    printf("\033[33m.\033[0m");
    printf("\n");
        scanf(" %c",&op);
        op=op|1<<5;
        switch(op)
        {
            case 'a': add_end(); break;
            case 'd': delete_node(); break;
            case 's': print_data();break;
            case 'm': modify();break;
            case 'c': count=count_node(); 
                    printf("\n\nNumber of records : %d \n",count);usleep(5000);break;
            case 'v':save();break;
            case 'e': exitfun();exit(0);
            case 't':sort();break;       
            case 'l':delete_all();break;

            case 'r':reverse_data();break;
     
        }
    }
}

