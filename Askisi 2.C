#include<stdio.h>

int main(){
    int year;
    printf("give a year\n");
    scanf("$d",&year);
    if(year/4 != 4){
        printf("it's a normal year\n");
    }
    else if(year/100 != 0){
        printf("it's a disect year\n");
    }
    else if(year/400 != 0){
        printf("it's a normal year\n");
    }
    else
    printf("it's a disect year\n");
    return 0;
}
