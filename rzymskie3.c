#include <stdio.h>
#include <string.h>

int check(char ch)
{
    switch(ch)
    {
    case 'I':
        return 1;
        break;

    case 'V':
        return 1;
        break;

    case 'X':
        return 1;
        break;

    case 'L':
        return 1;
        break;

    case 'C':
        return 1;
        break;

    case 'D':
        return 1;
        break;

    case 'M':
        return 1;
        break;

    default:
        return 0;
        break;


    }
}
int v(char c) //assigning values to characters
{
    switch(c)
    {
    case 'I':
        return 1;
        break;

    case 'V':
        return 5;
        break;

    case 'X':
        return 10;
        break;

    case 'L':
        return 50;
        break;

    case 'C':
        return 100;
        break;

    case 'D':
        return 500;
        break;

    case 'M':
        return 1000;
        break;


    }
}
int main()
{
    int control=1;

     while(control!=0){

    char roman[20];
    printf("Wprowadz liczbe rzymska \n");
    scanf("%s",roman);
    int n=strlen(roman);
    int romannum[n];

    for(int i=0;i<n;i++)
    {
        if(check(roman[i])!=0) //if typed char belongs to domain
            {
        romannum[i]=v(roman[i]);
            }
        else
            {
                printf("Wprowadzono nieprawidlowy znak. Program zakonczony.");
                return 0;
            }
    }

    int arabic=0;

   // for(int x=0;x<n;x++)
      //  printf("%d \n", romannum[x]);

    for(int j=0;j<n;j++)
    {
       if(j<(n-1))
       {
       int diff=romannum[j+1]-romannum[j];

       if(diff==0)
       {
           arabic=arabic+romannum[j]+romannum[j+1];
           j++;
       }
       else
       {
           if(diff>0)
            {
                arabic=arabic+diff;
                j++;
            }
            else
            {
                arabic=arabic+romannum[j];
            }
       }
       }
       else //j=n-1 czyli jestesmy na ostatnim miejscu
       {
           arabic=arabic+romannum[j];
       }
    }

    printf("%s = %d \n", roman, arabic);
    printf("Jesli chcesz zakonczyc program, wcisnij 0. Jesli chcesz kontynuowac wprowadz dowolna liczbe \n");
    scanf("%d", &control);
}
    return 0;
}

