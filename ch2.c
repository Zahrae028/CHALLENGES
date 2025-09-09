#include <stdio.h>

int array[10]= {1 , 2 , 7 ,1 , 10 , 1 , 1 , 5 ,6 , 2};
int size = 10 ;


void occurence(int n){
    
    int occ= 0;

    for (int i = 0; i < size; i++)
    {
        if (n == array[i])
        {
            occ++;
        }

    }
    printf("le nombre %d apparait %d de fois .",n ,occ);
    
}

void supprimer(int m){

    for (int i = 0; i < size; i++)
    {
        if (m == array[i])
        {
            for (int j = i; j < size; j++)
        {
            array[j]=array[j+1];
        }
        i--;
        size--;
        }

    }

    
    

    for (int i = 0; i < size; i++)
    {
        printf("%d ",array[i]);
    }
    

}

void pair_impair(){
    int pair[size] ;
    int in_p = 0;
    int impair[size];
    int in_imp = 0;
    
    for (int i = 0; i < size; i++)
    {
        if (array[i]%2 == 0)
        {
            pair[in_p] = array[i];
            in_p++;
        }
        else{
            impair[in_imp] = array[i];
            in_imp++;
        }
        
    }
    printf("the pair numbers :");
    for (int i = 0; i < in_p; i++)
    {
        
        printf("%d ",pair[i]);
    }
    printf("\nthe impair numbers :");
    for (int i = 0; i < in_imp; i++)
    {
        
        printf("%d ",impair[i]);
    }

}

int main(){
    int n;
    printf("entres le nombre : ");
    scanf("%d",&n);

    occurence(n);

    printf("\n");

    supprimer(n);

    printf("\n");

    pair_impair();


    return 0;
}