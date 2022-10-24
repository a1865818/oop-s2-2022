#include"sort_by_name.h"
void sort_by_name::sort(animal **animals,int n){
    animal *t;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (animals[j]->get_name()>animals[j+1]->get_name())
            {
                t=animals[j];
                animals[j]=animals[j+1];
                animals[j+1]=t;
            }
            
        }
        
    }
    
}