#include<stdlib.h>
#include<stdio.h>
#include <string.h>


int main(){
    FILE *fp;
    fp = fopen("text.txt", "r");
    char string[100];
    char tmp_string[100];
    if ( fgets(string, 100, fp) == NULL){
        printf("empty file");
    }
    else{
        for(int iter = 0; iter < sizeof(string); iter++){
            if(&string[iter] == ";"){
                printf("%s", tmp_string);
                for(int iter_tmp = 0; iter_tmp < sizeof(tmp_string); iter_tmp++){
                    tmp_string[iter_tmp] = "\0";
                }
            }
            else{
                tmp_string[iter] = &string[iter];
                printf("%c", tmp_string[iter]);
            }
        }
    }
    
}