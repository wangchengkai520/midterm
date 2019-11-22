#include<stdio.h>
#include<string.h>
int count1(char str[]){
    int i=0;int x=0;
    while(str[i]='\n'){
        if(str[i]=='words'){
             x++;
         }
         i++;
     }
     return x;
}    
int main(){
    char c[100];
    int i = 0;
    c[i] = getchar();
    while (c[i] !='\n'){
        i++;
        c[i] = getchar();
    }
    printf("The number of words is:");
    printf("%d\n",count1(c));
}