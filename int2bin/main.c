#include <stdio.h>
#include <stdlib.h>

typedef struct Binary{
    int size;
    char* value;
}Binary;

Binary int2bin(int a){
    Binary b;
    size_t check = 0;
    b.size = 1;
    b.value = (char*)malloc(b.size);

    b.value[0] = '\0';

    while (a>0)
    {
        if(check){
            b.size++;
            b.value = (char*)realloc(b.value, b.size);
        }
        check++;
        b.value[b.size -1] = a%2;
        a/=2;
    }
    return b;
}

int main(void){
    int a ;
    printf("type a decimal base number : ");
    scanf("%d",&a);
    Binary res = int2bin(a);
    printf("(%d)10 = (",a);
    for(size_t i = res.size ; i >0; i--)
        printf("%d",res.value[i-1]);
    
    puts(")2");
    free(res.value);
    res.value = NULL;
    return 0;
}