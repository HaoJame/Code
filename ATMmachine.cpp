#include<iostream>
#define MAX 1000
using namespace std;
int main()
{
    int Test;
    cin >> Test;
    while(Test --)
    {
        int Human,K;
        cin >> Human>>K;
        for(int i=0;i<Human;i++)
        {
            int n;
            cin >> n;
            if(K >=n)
            {
                K=K-n;
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        cout<<"\n";
    }
    return 0;
}