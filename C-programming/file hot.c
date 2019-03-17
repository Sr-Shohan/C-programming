#include <stdio.h>
#include <string.h>

int main(){

    int n,i,j,k,count=0, high=1, flag=0;
    char words[100][20],wordsOutput[100][20];

        printf("Enter number of elements to enter in an array: ");
        scanf("%d",&n);

        for(i=0;i<n;i++){
            fflush(stdin);
            printf("%d. ",i+1);gets(words[i]);fflush(stdin);
        }

        for(i=0;i<n-1;i++){
            count=0;
            for(j=i+1;j<n;j++){
                if(strcmp(words[i],words[j])==0){
                    count++;
                }
            }
            if(high<count){
                high=count;
                strcpy(wordsOutput[0],words[i]);
                strcpy(wordsOutput[1],"");
            }
            else if(high == count){
                flag=0;
                for(k=0;strcmp(wordsOutput[k],"")!=0;k++){
                    if(strcmp(words[i],wordsOutput[k])==0){
                        flag=1;
                    }
                }
                if(flag==0){
                    for(k=0;strcmp(wordsOutput[k],"")!=0;k++);
                    strcpy(wordsOutput[k],words[i]);
                    strcpy(wordsOutput[++k],"");
                }
            }
        }
        for(k=0;strcmp(wordsOutput[k],"")!=0;k++){
            puts(wordsOutput[k]);
        }
        if(strcmp(wordsOutput[0],"")==0){
                printf("\nNo coincident words");
        }

    return 0;
}
