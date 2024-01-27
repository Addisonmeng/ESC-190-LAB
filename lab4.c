/*
 * problem 2
 * # include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main(){
    float my_atoi(const char *str);
    float sum(char* fn);
    float result = sum("lab4.txt");
    printf("%f",result);

}

float my_atoi(const char *str)
{
    int sign = 1;
    int divider;
    int j = 0;
    int result = 0;

    for (int i = 0; i < strlen(str); ++i) {

        if(str[i] == '-'){
            sign = -1;
        }
        else if(isdigit(str[i])){
            j = i;
            if(str[i] >='0' && str[i] <= '9') {
                result = result * 10 + (str[i] - '0');
            }

        }
        else if (str[i]=='.'){
            divider = strlen(str)-i-1;
        }
    }
    return result * sign/ pow(10,divider);
}

float sum( char* fn){
    FILE *fp = fopen(fn,"r");
    char line[200];
    float sum = 0;
    while(fgets(line, 200, fp) != NULL){
        float value = my_atoi(line);
        sum += value;
    }
    fclose(fp);
    return sum;
}

 # include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct student2{
    char *name;
    int age;
} student2;

void change_name(student2 *p_s, char *new_name)
{
    //p_s->name = new_name;
    p_s->name = (char *)malloc(sizeof (new_name) * sizeof(char));
    strcpy(p_s->name, new_name);
}

int main()
{
    student2 s = {"Bob", 20};
    change_name(&s, "Alice");
    printf("%s\n",s.name);

}


 */