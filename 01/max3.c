#include <stdio.h>
int main(){
    int x, y, z, result;
    result = 0; // 任意の値を初期設定しないといけない
    printf("X = ");
    scanf("%d", &x);
    printf("Y = ");
    scanf("%d", &y);
    printf("Z = ");
    scanf("%d", &z);
    if (x < y)
    {
        if (y < z)
        {
            result = z;
        
        }
        else if (y > z)
        {
            result = y;
        }
        
    }
    else if (x < z)
    {
        if (z < y)
        {
            result = y;
        }
        else if (z > y)
        {
            result = z;
        }
        
    }
    else if (y < x)
    {
        if (x < z)
        {
            result = z;
        }
        else if (x > z)
        {
            result = x;
        }
        
    }
    else if (y < z)
    {
        if (z < x)
        {
            result = x;
        }
        else if (z > x)
        {
            result = z;
        }
        
    }
    else if (z < x)
    {
        if (x < y)
        {
            result = y;
        }
        else if (x > y)
        {
            result = x;
        }
        
    }
    else if (z < y)
    {
        if (y < x)
        {
            result = x;
        }
        else if (y > x)
        {
            result = y;
        }
        
    }
    printf("Maximum value is %d\n", result);
    return 0;
}