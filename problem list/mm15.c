#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    if(x<=100 && y<=100) printf("inside\n");
    else printf("outside\n");
}