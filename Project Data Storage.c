
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
    FILE *fp;
    struct Elements arr[1];
    fp = fopen("Element Details.txt", "a");
    if(fp==NULL)
    {
        printf("\nError cannot open file");
        exit(1);
    }

    printf("Enter element data \n");

        printf("Element name = ");
        fflush(stdin);
        scanf("%s",arr[0].element_name);

        printf("Element symbol = ");
        fflush(stdin);
        scanf("%s",arr[0].symbol);

        printf("Element atomic number = ");
        fflush(stdin);
        scanf("%d",&arr[0].atomic_number);

        printf("Element atomic mass = ");
        fflush(stdin);
        scanf("%f",&arr[0].atomic_mass);

        printf("Element natural state = ");
        fflush(stdin);
        scanf("%s",arr[0].natural_state);

        printf("Element use1 = ");
        fflush(stdin);
        gets(arr[0].use1);

        printf("Element use2 = ");
        fflush(stdin);
        gets(arr[0].use2);


    fwrite(arr,sizeof(struct Elements),1,fp);
    printf("Data stored successfully");

    fclose(fp);

}

