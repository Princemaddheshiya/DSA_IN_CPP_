#include<stdio.h>
int display(int arr[],int a){
    for (int i = 0; i < a; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
void deletion(int arr[],int a,int ind){
    
    for (int i = ind; i<a-ind; i++)
    {
        arr[i]=arr[i+1];
    }

    // }else{
    //     printf("no entery");
    // }
}
int main(){
    int arr[100]={2,3,5,7,9};
    int ind=0,t=100,e=18;

    printf("pahle\n");
    display(arr,7);
    deletion(arr,5,ind);
    printf("last\n");
    display(arr,7);
    return 0;
}