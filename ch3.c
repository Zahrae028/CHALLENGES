#include <stdio.h>
int array[7]={5 , 10 , 20 , 16 , 2 , 6};
int size = 7;

int sort_s_l(){
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (array[i]<array[j])
            {
                
            
            
            int temp = array[i];
            array[i]=array[j];
            array[j]=temp;
        }
        }
        
    }
    for (int h = 0; h < size; h++)
    {
        printf("%d ",array[h]);
    }
    

}
int main(){

    sort_s_l();
    return 0 ;
}