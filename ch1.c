#include <stdio.h>


float notes[6] = {12 , 15 , 7 , 20 , 18 , 14};
int size =6;


void Sum_moyenne(){
    float sum = 0; 
    for(int i=0 ; i <size;i++){

        sum = sum + notes[i];
    }
    printf("Somme : %.2f\n",sum);

    float moyenne = sum / size;
    
    printf("Moyenne : %.2f\n",moyenne);

}

void max_min(){
    float max = notes[0];
    
    for (int i = 0; i < size; i++)
    {
        if (max < notes[i])
        {
            max = notes[i];
        }
        
    }
    printf("le plues grand element est : %.2f \n",max);

    float min = notes[0];

    for (int i = 0; i < size; i++)
    {
        if(min>notes[i]){
            
            min = notes[i];
        }
        

    }

    
    printf("le plues petit element est : %.2f\n",min);
    
    
}
void inversion(){

    for (int i = size-1; i >=0; i--)
    {
        printf("%.2f ",notes[i]);
    }
    
}


int main(){

    Sum_moyenne();
    max_min();
    inversion();


    return 0;
}