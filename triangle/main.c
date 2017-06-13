//
//  main.c
//  triangle
//
//  Created by 20161104568 on 17/6/13.
//  Copyright © 2017年 20161104568. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        if(a==0&&b==0&&c==0)
            break;
        if(a+b<=c||a+c<=b||b+c<=a)
            printf("not a triangle");
        else if(a+b>=c&&a+c>=b&&b+c>=a)
        {
            if(a*a+b*b==c*c)
            {
                printf("yes\n");
            }
            if(a*a+b*b!=c*c)
            {
                printf("no\n");
            }
        }
    }
    return 0;
}
