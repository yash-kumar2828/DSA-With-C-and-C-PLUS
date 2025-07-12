#include<stdio.h>
int square(int n){
    printf("%d bytes\n",sizeof(int));
    printf("%d bytes\n",sizeof(n));
    return n*n;
}
int main(){
    int num;
    printf("enter any number=");
    scanf("%d",&num);
    printf("the square is :%d=",square(num));
    return 0;
}