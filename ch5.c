#include <stdio.h>
int array[6] = {1, 3, 5, 7, 9, 11};
int size = 6;
int array2[6] = {0 , 4 , 6 , 10 , 16 , 20};
int size2 = 6 ;




void rotation()
{
    int n;
    int choix;
    printf("combien de rotation : ");
    scanf("%d", &n);
    printf("1)a gauche\n");
    printf("2)a droite");
    scanf("%d", &choix);

    if (choix == 1)
    {
        for (int i = 0; i < n; i++)
        {
            int temp = array[0];

            for (int j = 0; j < size; j++)
            {

                array[j] = array[j + 1];
            }
            array[size - 1] = temp;
        }
        for (int h = 0; h < size; h++)
        {
            printf("%d ", array[h]);
        }
    }

    else if (choix == 2)
    {
        for (int i = 0; i < n; i++)
        {
            int temp = array[size - 1];

            for (int j = size - 1; j >= 0; j--)
            {

                array[j] = array[j - 1];
            }
            array[0] = temp;
        }
        for (int h = 0; h < size; h++)
        {
            printf("%d ", array[h]);
        }
    }
}

void binary_search()
{
    int n;
    int stop = 0;
    printf("search for value :");
    scanf("%d", &n);

    int high = (size - 1);
    int low = 0;
    int moy = high / 2;
    

    do
    {
            if (n>array[high] || n< array[low])
            {
                stop = 1;
            }
            else{
        
        
                if (array[high] == n)
                {
                    moy = high;
                }
                else if (array[low] == n)
                {
                    moy = low;
                }
                if (n < array[moy])
                {
                    high = moy - 1;
                    moy = high/2    ;
                }
                else if (n > array[moy])
                {
                    low = moy + 1;
                    moy = low + moy / 2;
                }
            }
        
    } while (array[moy] != n && stop != 1);

    if (stop == 0)
    {
        printf("the value %d is in the spot number : %d ", n, moy + 1);
    }
    else
    {
        printf("value not available!!!");
    }
}


// void fusion(){
//     int size3 = size + size2;
//     int array3[size3];
//     int index = 0;
//     do
//     {
        
    
    
//     for (int i = 0; i < size;i++)
//     {
//         for (int j = 0; j < size; j++)
//         {
//             if (array[i]>array2[j])
//             {
//                 array3[index]=array2[j];
//                 index++;
                
//             }
//             else{

//                 array3[index]=array[i];
//                 index++;
//                 i++;
//                 j--;
                
//             }
//         }
//         if (i>size)
//         {
//             array3[index]=array[i];
//                 index++;
//         }
        
//     }
    
//     } while (index<size3);

//     for (int h = 0; h < index; h++)
//     {
//         printf("%d ",array3[h]);
//     }
    
// }

void fusion(){
    int size3 = size + size2;
    int array3[size3];
    int index = 0;

    for (int i = 0; i < size; i++)
    {
        array3[index] = array[i];
        index++;
    }
    for (int i = 0; i < size2; i++)
    {
        array3[index] = array2[i];
        index++;
    }
    

    for (int i = 0; i < size3; i++)
    {
        for (int j = i+1; j < size3; j++)
        {
            if (array3[i]>array3[j])
            {
                
            
            
            int temp = array3[i];
            array3[i]=array3[j];
            array3[j]=temp;
        }
        }
}
        for (int h = 0; h < index; h++)
            {
                printf("%d ",array3[h]);
            }
}
int main()
{

    fusion();

    return 0;
}