#include<stdio.h>
int main (){
    int n, i, a [ ] = {97, 96, 95, 93, 84, 72, 64, 53, 51, 43, 33, 25, 14, 13, 6};
    int left, right, mid;
    mid = (left+right)/2;
    int key;
    printf("Enter search key: ");
    scanf("%d", &key);
    while (left<=right){
        if (key>a[mid]){
            right = mid-1;
        }else if (key<a[mid]){
        left = mid+1;
        }else if (key==a[mid]){
        printf("found %d at location", mid);
        break;
        }
        mid = (left+right)/2;
    } if(left>right){
    printf("not found");
    }
return 0;
}
