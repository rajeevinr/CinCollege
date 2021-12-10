#include <stdio.h>

int main() {
    int n,rev=0,rem,org;
    printf("input a num: \n");
    scanf("%d",&n);
    org=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    printf("reversed num is %d\n",rev)
    if (rev==org){
        printf("previous and current num is same!\n");
    }
    else{
        printf("Both are different nums");
    }
    return 0;
}
