#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int trans (char x[])
{
    int i=0,z=0;
    while (x[i]>='0' && x[i]<='9' && x[i]!=NULL)
    {
        z = z*10 +(x[i]-'0');
        i++;
    }
    return z;

}
int main()
{
    FILE *fp;
    fp = fopen ("ini.txt", "r");
    char x[100];
    int s=0,a;
    while (fgets(x,10,fp))
    {
        a=trans(x);
        s=s+a;
    }
    printf ("%d\n",s);
    return 0;
}
