//question 13 : Check for duplicate string in an array

#include<stdio.h>
#include<string.h>

int main(){

    char* names[] = {"Pavan", "Khot", "Sunbeam", "Khot", "PG-DAC", "Pavan", "Pune", "Hinjewadi", "pune", "pavan", "programming",
                    "Java", "programming"};
    
    //printf("%s ", names[0]);
    
    printf("\nDuplicate entries are: ");

    for(int i=0; i<13-1; i++){
        for(int j=i+1; j<13; j++){
            if(strcmp(names[i], names[j]) == 0){
                printf("\n%s", names[i]);
                continue;
            }
        }
    }
}
