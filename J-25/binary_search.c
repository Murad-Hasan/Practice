#include<stdio.h>

int main(){
    int a[] = {1,3,13,16,18,21,27,30,85,99};
    int item = 99 ;  //find this number

    int left , right , middle;
    left = 0;
    right = 9;
    
    while (left <= right)
    {
        middle = (left+right)/2;
        if (a[middle] == item)
        {
            printf("Item found at index : %d\n", middle);
            return 0 ;
        }else if(a[middle] < item){
            left = middle + 1;
        }else{
            right = middle - 1;
        }
    }
    printf("Item Not Found");
    
    return 0;
}