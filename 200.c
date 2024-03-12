#include<stdio.h>
int main(){
    int monthnum;
    printf("enter the  month num = "),
    scanf("%d", &monthnum);
    if(monthnum == 1){
        printf("month is january");
    }else if(monthnum == 2 ){
         printf("month is feb");
     } else if(monthnum == 3 ){
           printf("month is march");
       } else if(monthnum == 4){
         printf("month is april");
          }else if(monthnum == 5 ){
         printf("month is may");
          }else if(monthnum == 6 ){
         printf("month is june");
          }else if(monthnum == 7){
         printf("month is july");
          }else if(monthnum == 8){
         printf("month is aug");
          }else if(monthnum == 9 ){
         printf("month is sep");
          }else if(monthnum == 10 ){
         printf("month is oct");
          }else if(monthnum == 11 ){
         printf("month is nov");
          }else if(monthnum == 12 ){
         printf("month is dec");
    } else{
        printf("not a valid input");
    }
}