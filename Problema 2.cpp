#include <bits/stdc++.h>

using namespace std;
void sortare (char x[50][50], int n)
{
    for (int i=1; i<n; i++)
        for (int j=i+1; j<=n; j++)
            if (strlen(x[i])<strlen(x[j]))
            {
                char aux[100];
                strcpy (aux, x[i]);
                strcpy(x[i],x[j]);
                strcpy(x[j],aux);
            }
}
int main()
{
    char x[50][50],s[250];
    int n=0;
    scanf("%[^\n]", s);
    char *p;
    p=strtok(s," ");
    while (p!=NULL)
    {
        n++;
        strcpy(x[n],p);
        p=strtok(NULL," ");
    }
    sortare(x,n);
    for (int i=1;i<=n;i++)
        cout<<x[i]<<endl;
    return 0;
}
