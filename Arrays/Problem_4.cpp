// sort an array without using any algo which only contains 0's, 1's and 2's
#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
    int n;
    cout<<"Gimme the value of N: ";
    cin>>n;

    int *a;
    a = (int*)malloc(n*sizeof(int));
    int count_1 = 0, count_2 = 0, count_0 = 0;

    cout<<"Gimme the array elements: ";
    for(int i=0;i < n;i++)
    {
        scanf("%d", &a[i]);

        if(a[i] == 0)
        {
            count_0++;
        }

        else if(a[i] == 1)
        {
            count_1++;
        }

        else
        {
            count_2++;
        }
    }

    for(int i=0;i < count_0;i++)
    {
        a[i] = 0;
        cout<<a[i]<<" ";
    }

    for(int i=count_0;i < count_1 + count_0;i++)
    {
        a[i] = 1;
        cout<<a[i]<<" ";
    }

    for(int i=count_1 + count_0;i < n;i++)
    {
        a[i] = 2;
        cout<<a[i]<<" ";
    }
    cout<<'\n';

    return 0;
}