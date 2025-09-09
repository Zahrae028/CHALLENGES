#include <stdio.h>

int array[4][4]= {{1 ,10 , 4 , 7} 
                 ,{2 , 1 , 7 , 10}
                 ,{10 ,6 , 8 , 9}
                 ,{10 ,10 , 3 , 2}};
int size = 4;
void l_c(){
    int sum_ligne [size] ;
    int sum_colonne [size];


    for (int i = 0; i < size; i++)
    {
    int sum_j = 0 ;
    int sum_i =  0;
        for (int j = 0; j < size; j++)
        {
            
            sum_j = sum_j + array[i][j];
            sum_i = sum_i + array[j][i];

        }
    sum_ligne [i] = sum_j;
    sum_colonne[i] = sum_i;
        
    }
    printf("sommes des lignes : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",sum_ligne[i]);
    }
    
    printf("\n");

    printf("sommes des colonnes : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",sum_colonne[i]);
    }
    printf("\n");
}

void diagonaux(){
    printf("diagonaux principale : ");
    for (int i = 0; i < size; i++)
    {   
            printf("%d ",array[i][i]);
        
    }
    printf("\ndiagonaux secondaire :");
    
    for (int i = 0; i < size; i++)
    {   
            printf("%d ",array[i][size-1-i]);
        
    }
    printf("\n");
}

void matrice_tr(){
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ",array[j][i]);
        }
        printf("\n");
    }
    
}

int main(){

    l_c();
    diagonaux();
    matrice_tr();


    return 0 ;
}