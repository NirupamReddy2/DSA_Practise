// Find max and min elements in an array
#include<iostream>
#include<cstdio>
using namespace std;
int max_elem(int *arr, int N)
{
    int temp = arr[0];

    for(int i=1;i < N;i++)
    {
        if(temp < arr[i])
        {
            temp = arr[i];
        }
    }

    return temp;
}
//---------------------------------------------------------------------------------------------
int min_elem(int *arr, int N)
{
    int temp1 = arr[0];

    for(int i=1;i < N;i++)
    {
        if(temp1 > arr[i])
        {
            temp1 = arr[i];
        }
    }

    return temp1;
}
//---------------------------------------------------------------------------------------------
int main()
{
    int n;
    cout<<"Gimme the size of the array: ";
    cin>>n;

    int *a;
    a = (int*)malloc(n*sizeof(int));

    cout<<"Gimme the array elements: ";
    for(int i=0;i < n;i++)
    {
        scanf("%d", &a[i]);
    }

    int max = max_elem(a, n);
    int min = min_elem(a, n);

    cout<<"max element is: "<<max<<'\n';
    cout<<"min element is: "<<min<<'\n';
    
    return 0;
}