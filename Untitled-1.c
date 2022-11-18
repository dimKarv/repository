#include <stdio.h>

int main(){
    char name[20];
    char answer[3];
    printf("type your name\n");
    scanf("%s",&name);
    printf("is your name %s ?",&name);
    scanf("%s",&answer);
    if(answer == "yes")
        printf("hello %s , I'm C\n",&name);
        else if (answer ==" no"){
            printf("what is your real name?\n");
            scanf("%s",&name);
        }
        else
        printf("your answer was not valid\n");  
        return 0;
}