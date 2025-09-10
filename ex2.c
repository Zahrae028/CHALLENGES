#include <stdio.h>





int main(){
    int array[7] = {1,6,20,13,5,12,9};
    int size= 7;
    float moyenne =0;
    int sum = 0;
    
    for (int i = 0; i < size; i++)
    {
        sum = sum + array[i];
    }
    moyenne = sum/7;
printf("%.0f",moyenne);

    return 0;
}