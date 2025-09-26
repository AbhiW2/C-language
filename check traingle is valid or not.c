#include<stdio.h>
int main(){
    int x,y,z;
        printf("Enter three side of traingle:");
        scanf("%d %d %d",&x,&y,&z);

        if((x>0 && y>0 && z>0) && (x+y+z==180))
            printf("Traingle is valid");
        else
            printf("Traingle is Invalid");

        return 0;
}