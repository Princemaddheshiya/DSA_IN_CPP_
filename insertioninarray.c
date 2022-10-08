#include<stdio.h>
int display(int arr[],int a){
    for (int i = 0; i < a; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
void insert(int arr[],int a,int e,int ind,int t){
    if(ind<=t){
    for (int i = a-1; i>=ind; i--)
    {
        arr[i+1]=arr[i];
    }
arr[ind]=e;
    }else{
        printf("no entery");
    }
}
int main(){
    int arr[100]={2,3,5,7,9};
    int ind=3,t=100,e=18;

    printf("pahle\n");
    display(arr,5);
    insert(arr,6,e,ind,t);
    printf("last\n");
    display(arr,6);
    return 0;
}