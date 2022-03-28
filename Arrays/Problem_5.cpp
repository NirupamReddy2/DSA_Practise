// Move all negative numbers to beginning and positive to end with constant extra space
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

    cout<<"Gimme the array elements: ";
    for(int i=0;i < n;i++)
    {
        scanf("%d", &a[i]);
    }

    int j = n - 1;
    for(int i=0;i < n;i++)
    {
        if(a[i] < 0)
        {
            continue;
        }

        else if(a[i] < 0 && a[j] < 0)
        {
            continue;
        }

        else
        {
            if(j > i)
            {
                if(a[j] > 0)
                {
                    while(a[j] > 0 && j > i)
                    {
                        j--;
                    }

                    int swap = 0;
                    swap = a[j];
                    a[j] = a[i];
                    a[i] = swap;
                    j--;
                }

                else
                {
                    int swap1 = 0;
                    swap1 = a[j];
                    a[j] = a[i];
                    a[i] = swap1;
                    j--;
                }
            }
        }

    }

    for(int i=0;i < n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<'\n';
    
    return 0;
}