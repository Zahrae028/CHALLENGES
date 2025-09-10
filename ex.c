int array[12] = {1, 2 , 3 ,2 ,4,2,2,4,3,3,3,3};
int size = 12 ;







void tri_fr(){
    int index=0;
    
    int nums[10][10];
    int occs[10];
    
    
    
    for (int i = 0; i < size; i++)
    {int occ = 0;
        for (int j = i+1; i < size; j++)
        {
            if (array[i]==array[j])
            {
                
                nums[i][occ] = array[j];
                occ++;
                for (int k = 0; k < size; k++)
                {
                    array[j]=array[j+1];
                }
                size--;
                
            }
            occs[i]=occ;
        }
        
    }
    

}


int main(){



    return 0;
}