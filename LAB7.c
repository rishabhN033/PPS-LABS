#include <stdio.h>

struct component
{
   int id;
   float weight;
   char material[30];
};

int main()
{
    struct component c[5];
    int i;
    
    printf(" Enter details of 5 mechanical components:\n");
    for (i = 0; i < 5; i++)
    {
         printf("\ncomponent %d\n", i + 1);
         
         printf(" Enter component ID:");
         scanf("%d", &c[i].id);
         
         printf("Enter weight (Kg):");
         scanf("%f" , &c[i].weight);
         
         printf("Enter material type:");
         scanf("%29s", c[i].material);
     }
     
     printf("\n---- Mechanical Components Details---\n");
     printf("ID\tWeight(kg)\tMaterial\n");
     
     for (i = 0; i < 5; i++)
     {
         printf("%d\t%.2f\t\t%s\n", c[i].id, c[i].weight, c[i].material);
     }
     
     return 0;
}
