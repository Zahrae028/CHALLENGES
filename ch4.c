#include <stdio.h>

                int array[4][4]={{1 ,10 , 4 , 7} 
                                ,{2 , 1 , 7 , 10}
                                ,{10 ,6 , 8 , 9}
                                ,{10 ,10 , 3 , 2}};

int array2[4][4] ={{3, 17, 12, 5},
                {9, 0, 14, 20},
                {8, 19, 7, 2},
                {15, 4, 11, 6}
};
            
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

void pr_matrice(){

    int prod[4][4] ;
    for (int k = 0; k < size; k++)
    {

    for (int i = 0; i < size; i++)
    {
        int sum =0;

        for (int j = 0; j < size; j++)
        {
            sum =  sum +  array2[i][k] * array[k][j];
        }
        
        prod[i][k]=sum;


    }
    }
    for (int h = 0; h < size; h++)
    {
        for (int g = 0; g < size; g++)
        {
            printf("%d ",prod[h][g]);
        }
        printf("\n");
    }
    
}

int main(){

    l_c();
    diagonaux();
    matrice_tr();

    pr_matrice();

    return 0 ;
}