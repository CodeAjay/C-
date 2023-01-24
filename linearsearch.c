#include<stdio.h>
void ls(int n,int arr[n],int k){
    int c=0;
    for(int i=1;i<=n;i++){
        if(arr[i-1]==k){
            c=i;
            break;
        }else{
            c+=0;
        }
    }
    if(c==0){
        printf("Element not found.");
    }else{
        printf("Element is on %d position",c);
    }
}
int main(){
    int n,k;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    printf("Enter element you want to find position: ");
    scanf("%d",&k);
    ls(n,arr,k);
    return 0;
}