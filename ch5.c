#include <stdio.h>
int array[6]= {1 , 2 , 3 , 4 , 5 ,6};
int size = 6;


void rotation(){
    int n;
    int choix;
    printf("combien de rotation : ");
    scanf("%d",&n);
    printf("1)a gauche\n");
    printf("2)a droite");
    scanf("%d",&choix);

    if (choix == 1)
    {
        for (int i = 0; i < n; i++)
    {int temp = array[0];

        for (int j = 0; j < size; j++)
        {
            
            array[j]=array[j+1];
        }
        array[size-1]= temp;
    }
    for (int h = 0; h < size; h++)
    {
        printf("%d ",array[h]);
    }
    }
    
    else if(choix==2){
        for (int i = 0; i < n; i++)
    {int temp = array[size-1];

        for (int j = size-1; j >=0; j--)
        {
            
            array[j]=array[j-1];
        }
        array[0]= temp;
    }
    for (int h = 0; h < size; h++)
    {
        printf("%d ",array[h]);
    }
    }

    
    
}

int main(){
    rotation();

    return 0;
}