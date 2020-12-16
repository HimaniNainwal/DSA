#include<iostream>
using namespace std;
int main()
{
    int T;    // test cases
    int N;    //denoting size of nums array.
    cout<<"Enter number of test cases : ";
    cin>>T;
    while(T>=1)
    {
        cout<<"Enter size of nums array : ";
        cin>>N;
        int nums[N+1];
        cout<<"Enter inputs : ";
        for(int i=1;i<=N+1;i++)
        {
            cin>>nums[i];
        }
        for(int j=1;j<=N+1;j++)
        {
            for(int k=j+1;k<=N+1;k++)
            {
                if(nums[j]==nums[k])
                {
                    cout<<"Output : "<<nums[j]<<endl;
                    break;
                }
            }

        }
        T--;
    }
    return 0;
}
