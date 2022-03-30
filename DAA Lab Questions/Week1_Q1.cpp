/*LINEAR SEARCH*/

#include <iostream>
using namespace std;

int binary_search(int [], int, int, int);

int main()
{
    int test;

    cout<<"enter the number of test cases - ";
    cin>>test;

    for(int i=1;i<=test;i++)
    {
        int n;
        cout<<"enter size of array -";
        cin>>n;

        int a[n];
        cout<<"enter "<<n<<" elements in the array -";
        for(int j=1;j<=n;j++)
        {
            cin>>a[i];
        }

        int key;
        cout<<"enter key to find : ";
        cin>>key;

        int index;
        index = binary_search(a,0,n-1,key);
        if(index==-1)
            cout<<"key not present";
        else    
            cout<<"Key is present at - "<<index;
    }

    return 0;
}