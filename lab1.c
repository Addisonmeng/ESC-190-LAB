/*problem 2
int main ()
{   void change(int *a);

    int a = 5;
    change(&a);
    printf("%d",a);

}

void change(int *a) {
    *a = 10;
}*/

/*problem 3(version 1)
int main ()
{   void change(char *arr);

    char arr[] = "Hello";
    change(arr);
    printf("%s",arr);

}

void change(char* arr){
    arr[0] = 'q';
}*/

/*problem4
int main ()
{
    int* insertion(int* arr);
    int i = 0;
    int a[5] = {9, 11, 4, 5, 6};
// initialize i to 0, run the loop while i < 5, and increase i by 1 every time;
// Here, i++ is the same as i = i + 1
    int *result = insertion(a);
    for(i = 0; i < 5; i++){
        printf("%d\n", result[i]);
    }

}
int* insertion(int* arr){
    int len = sizeof(arr)/sizeof(arr[0]);
    for (int i = 1; i < 5; ++i) {
        for (int j = i; j > 0; --j) {
            if(arr[j-1]>arr[j]){
                int temp;
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            } else{
                break;
            }
        }
    }
    return arr;
}*/

/*problem5
int main ()
{
    int  my_strlen(char* s);
    char a[] = "Hello";
    int x = my_strlen(a);
    printf("%d",x);


}
int my_strlen(char* s){
    int i = 0;
    while (i != '\0'){
        i++;
    }
    return i;
}*/

/*problem6
int main ()
{
    void seq_replace(int *arr1, unsigned long arr1_sz, int *arr2, unsigned long arr2_sz);
    int a[] = {5, 6, 7, 8, 6, 7};
    int b[] = {6, 7};

    seq_replace(a, 6, b, 2);


    for(int i = 0; i < 6; i++){
        printf("%d\n", a[i]);
    }



}
void seq_replace(int *arr1, unsigned long arr1_sz, int *arr2, unsigned long arr2_sz)
{
    for (int k = 0; k < arr1_sz; ++k) {
        for (int l = 0; l < arr2_sz; ++l) {
            if (arr1[k]==arr2[l]){
                arr1[k] = 0;

            }

        }

    }
}
*/