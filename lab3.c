//
// Created by mengbo on 2023/12/26.
//
/* problem 1
 * one is pointer one is value
 *
 * #include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <string.h>

typedef struct student1{
    char name[200];
    char student_number[11];
    int year;
} student1;

typedef struct student2{
    char *name;
    char *student_number;
    int year;
} student2;

int main(){
    void info(student1 student);
    void set_default_name(student1 *p_s);
    void set_default_name_wrong(student1 s);
    void create_block1(student1 **p_p_s, int n_students);
    void set_name(student1 *p_s, char *name);
    void set_name2(student2 *p_s, char *name);
    void set_names(student1 s1, student2 s2);

    //student1 A = {"Addison","110",2023};
    student1 A;
    strcpy(A.student_number,"110");
    strcpy(A.name,"Addison");
    A.year = 2023;
    //info(A);
    set_default_name(&A);
    //info(A);
    //set_default_name_wrong(A);
    //info(A);
    create_block1(&A, 2);
    set_name(&A, "happy");
    //info(A);




    student2 B = {"Addison","110",2023};
    set_name2(&B, "Addison");
    //printf("%s\n",B.name);
    set_names(A,B);
    info(A);
    printf("%s\n",B.name);
}

void info(student1 student){
    printf("%s\n",student.name);
    printf("%s\n",student.student_number);
    printf("%d\n",student.year);
}
// 为什么这个不用malloc也可以成功运行，但是set_default_name2需要
void set_default_name(student1 *p_s){
    strcpy(p_s->name,"Default student");
}
void set_default_name_wrong(student1 s){
    strcpy(s.name,"B");
    s.year = 3333;
    // Because it is not pointer, same reason as P1
}

void create_block1(student1 **p_p_s, int n_students){
    *p_p_s = (student1*) malloc(n_students*sizeof(student1));
}
void set_name(student1 *p_s, char *name){
    for (int i = 0; i < 200; ++i) {
        p_s->name[i] = name[i];
    }
    p_s->name[199] = '\0';
}

void destroy_block1(student1 *p_s)
{
    free(p_s);
}


void create_block2(student2 **p_p_s, int num_students){
    *p_p_s = (student2* )malloc(num_students*sizeof(num_students));
    for (int i = 0; i < num_students; ++i) {
        (*p_p_s)[i].name = 0;
        (*p_p_s)[i].student_number = 0;
    }

}

void set_name2(student2 *p_s, char *name)
{
    // p_s->name = new_name;
    p_s->name = (char *)malloc(sizeof (name) * sizeof(char));
    strcpy(p_s->name, name);
}

void destroy_block2(student2 *p_s, int num){
    for(int i = 0; i < num; ++i)
    {
        free(p_s[i].name);
        free(p_s[i].student_number);
    }
    free(p_s);
}

void set_names(student1 s1, student2 s2)
{
    strcpy(s1.name, "John"); // copies the string "John" into the array in the local s1
    // no effect outside the function
    strcpy(s2.name, "John"); // copies the string "John" to the address s2.name, which is

}
 # include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

}

void print_file(char* filename, int N)
{
    char line[200];
    FILE *fp = fopen(filename,  "r");
    for(int i = 0; i < N; i++){
        fgets(line, sizeof(line), fp); //read in at most sizeof(line) characters
        printf("%s", line);
    }
    fclose(fp);
}
double avg_nums(char* filename)
{
    double sum = 0;
    char line[200];
    FILE *fp = fopen(filename, "r");

    int count = 0;
    while(fgets(line, 200, fp) != NULL){
        sum += atoi(line);
        count++;
    }
    fclose(fp);
    return sum/count;
}
*/