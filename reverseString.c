// #include<stdio.h>
// #include<string.h>
// void reverseString( char *str){
// char *start = str;
// char *end = str + strlen(str) -1;

// while(start<end){
//     char temp= *start;
//     *start=*end;
//     *end= temp;
//     start++;
//     end--;
// }
// }

// int main(){
//     char String[] = "telugu";
//     printf("original string: %s\n", String);
//     reverseString(String);
//     printf("reverse a string: %s", String);
// }


#include<stdio.h>
void reverseString(char *str){
    char *start = str;
    char *end = str;
    while(*end!='\0'){
        end++;
    }
    end--;
    while(start<end){
        char temp= *start;
        *start= *end;
        *end = temp;

        start++;
        end--;
    }
}
int main(){
    char String [] ="google";
    printf("original string: %s\n", String);
    reverseString(String);
    printf("reversed string: %s\n", String);
    return 0;
}

