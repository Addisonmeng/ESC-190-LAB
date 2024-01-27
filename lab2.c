
/* problem1(version 1)
void function(char **ptr, int* a){
    printf("Enter number of letter:");
    scanf("%d",a);
    *ptr = (char* )malloc(*a * (sizeof(char)+1));

    for (int j = 0; j < *a; ++j) {
        printf("Enter letter %d",j);
        scanf("(这个空格？？？？？)%c",&(*ptr)[j]);
    }?????????????
    *ptr[*a] = '\0';


}
int main(){

    int a;
    char *str;
    function(&str,&a);
    printf("&s",str);
    free(str);

}

//problem1
void function(char **ptr, int* a){
    printf("Enter number of letter:");
    scanf("%d",a);
    *ptr = (char* )malloc((*a+1) * (sizeof(char)));

    for (int j = 0; j < *a; ++j) {
        printf("Enter letter %d",j);
        scanf(" %c",&(*ptr)[j]);
    }
    (*ptr)[*a] = '\0';


}
int main(){

    char *my_str;
    int sz;
    function(&my_str, &sz);
    printf("%s", my_str);
    free(my_str);

}

 int main(){
    void my_strcat2(char *a, char *b);
    char a[3] = "H";
    char* b = "H";
    my_strcat2(a,b);
    printf("%s",a);


}
problem 2
void my_strcat(char *a, char *b)
{
    // concatenate src to dest
    // assume there is enough space in dest for dest + src + the trailing NULL
    int i = 0;
    while (a[i] != '\0'){
        i++;
    }
    int j = 0;
    while (b[j] != '\0'){
        a[i] = b[j];
        i++;
        j++;
    }
    a[i] = '\0';
// s1 == s2 is true iff s1 and s2 are the same address. It would be false for strings that happen to have the same contents, but are stored in different place
// *s1 == *s2 is true iff the first characters of s1 and s2 are the same. s1 and s2 could be different in terms of everything but the first character, and *s1==*s2 would still be true
// strcmp(s1, s2) is 0 if s1 and s2 have the same contents and nonzero otherwise. s1 and s2 could be stored at different addresses but still can have the same contents

}

void my_strcat2(char *a, char *b){
    int i = 0;
    while (*(a+i) != '\0'){
        i++;
    }
    int j = 0;
    while (*(b+j) != '\0'){
        *(a+i) = *b;
        a++;
        b++;
    }
    *(a+i) = '\0';

}

problem 3
int strcmp(char *a, char*b){
    if(*a == '\0' && *b == '\0'){
        return 0;
    }
    else if (*a > *b){
        return 1;
    }
    else if (*a < *b){
        return -1;
    }
    else if (*a == '\0'){
        return -1;
    }else if (*b == '\0'){
        return 1;
    } else{
        return strcmp(a+1,b+1);
    }
}

 problem 5
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(){

    char* a = "12345";
    int* my_atoi(char *str);
    int* result;
    result = my_atoi(a);
    for (int i = 0; i < strlen(a); ++i) { ///( for (int i = 0; i < sizeof(a)/sizeof(a[0]); ++i)  output: 12345000????)存的是地址和lab1 p4
        printf("%d",result[i]);
    }

}
int* my_atoi(char *str){
    static int  temp[sizeof(str)/sizeof(str[0])](这个其实也不对，只能出来8); (static int  temp[strlen(str)];)为什么不行
    for (int i = 0; i < strlen(str); ++i) {
        if (isdigit(str[i])){
            temp[i] = *(str+i)-'0';
        }
    }
    return temp;
}
*/
