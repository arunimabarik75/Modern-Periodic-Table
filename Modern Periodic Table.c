#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Elements
{
    char element_name[10];
    char symbol[3];
    int atomic_number;
    float atomic_mass;
    char natural_state[10];
    char use1[100];
    char use2[100];
};

main()
{
    //main screen
    printf(" MODERN PERIODIC TABLE\n");
    printf(" What do you know about the element?\n");
    printf(" 1)Name of element \n 2)Atomic symbol \n 3)Atomic number\n\n");

    //file open
    FILE *fp;
    struct Elements arr[6];
    fp = fopen("Element Details.txt", "r");
    fread(arr,sizeof(struct Elements),6,fp);

    //taking user choice
    int choice;
    printf("Press the number according to your choice ...(1,2,3): ");
    scanf("%d",&choice);

    int flag=0;

    //conditions based on user choice
    if (choice==1)  //name of element
    {
        char element_name[10];
        printf("Enter element's name: ");
        scanf("%s",element_name);

        for(int i=0; i<6; i++)
        {
            if(strcmpi(element_name,arr[i].element_name)==0)
            {
                printf("\n The details about the element you are searching for are: ");

                printf("\n \t Element name = ");
                printf("%s",arr[i].element_name);

                printf("\n \t Element symbol = ");
                printf("%s",arr[i].symbol);

                printf("\n \t Element atomic number = ");
                printf("%d",arr[i].atomic_number);

                printf("\n \t Element atomic mass = ");
                printf("%.3f",arr[i].atomic_mass);

                printf("\n \t Element natural state = ");
                printf("%s",arr[i].natural_state);

                printf("\n \t Element use1 = ");
                puts(arr[i].use1);

                printf("\t Element use2 = ");
                puts(arr[i].use2);

                flag=1;
            }
        }
    }

    else  if (choice==2)  //element symbol
    {
        char element_symbol[3];
        printf("Enter element's symbol: ");
        scanf("%s",element_symbol);

        for(int j=0; j<6; j++)
        {
            if (strcmpi(element_symbol,arr[j].symbol)==0)
            {
                printf("\n The details about the element you are searching for are: ");

                printf("\n \t Element name = ");
                printf("%s",arr[j].element_name);

                printf("\n \t Element symbol = ");
                printf("%s",arr[j].symbol);

                printf("\n \t Element atomic number = ");
                printf("%d",arr[j].atomic_number);

                printf("\n \t Element atomic mass = ");
                printf("%.3f",arr[j].atomic_mass);

                printf("\n \t Element natural state = ");
                printf("%s",arr[j].natural_state);

                printf("\n \t Element use1 = ");
                puts(arr[j].use1);

                printf("\t Element use2 = ");
                puts(arr[j].use2);

                flag=1;
            }
        }
    }

    else  if (choice==3)  //atomic number
    {
        int element_atomic_number;
        printf("Enter element's atomic number: ");
        scanf("%d",&element_atomic_number);

        for(int k=0; k<6; k++)
        {
            if(element_atomic_number==arr[k].atomic_number)
            {
                printf("\n The details about the element you are searching for are: ");

                printf("\n \t Element name = ");
                printf("%s",arr[k].element_name);

                printf("\n \t Element symbol = ");
                printf("%s",arr[k].symbol);

                printf("\n \t Element atomic number = ");
                printf("%d",arr[k].atomic_number);

                printf("\n \t Element atomic mass = ");
                printf("%.3f",arr[k].atomic_mass);

                printf("\n \t Element natural state = ");
                printf("%s",arr[k].natural_state);

                printf("\n \t Element use1 = ");
                puts(arr[k].use1);

                printf("\t Element use2 = ");
                puts(arr[k].use2);

                flag=1;

            }
        }
    }

    if(flag==0 && (choice==1||choice==2||choice==3))//requested element not present
    {
        printf("Enter correct data\n ");
    }

    else if(choice!=1 && choice!=2 && choice!=3)   //wrong input by user
        printf("Sorry please enter the choice from list\n ");



    fclose(fp);
}







