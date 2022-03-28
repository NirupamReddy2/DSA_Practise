// Reverse the array
#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int* rev_array(int *arr, int N)
{
    for(int j=0;j < N/2;j++)
    {
        int temp = arr[j];
        arr[j] = arr[N-j-1];
        arr[N-j-1] = temp;
    }

    return arr;
}

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

    a = rev_array(a, n);

    cout<<"The reveresed array is: ";
    for(int i=0;i < n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<'\n';
    
    return 0;

}