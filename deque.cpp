#include<bits/stdc++.h>
using namespace std;

// Deque follow the combination of both stack and queue

int main()
{
    int n;
    cout<<"Enter Deque size: "<<endl;
    cin>>n;

    deque<int>dq;

    cout<<"Enter Deque values: "<<endl;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        dq.push_back(x); // It will push in the last
    }

    cout<<endl<<"Deque: "<<endl;
    for(int i=0; i<dq.size(); i++)
    {
        cout<<dq[i]<<" ";
    }
    cout<<endl<<endl;
    cout<<"Show 1st: "<<dq.front()<<endl;
    cout<<"Show last: "<<dq.back()<<endl;

    dq.push_front(99);
    dq.push_back(99);

    cout<<endl<<"Deque after push_front and push_back: "<<endl;
    for(int i=0; i<dq.size(); i++)
    {
        cout<<dq[i]<<" ";
    }

    //dq.pop_back();
    dq.erase(dq.begin()+1, dq.end()-2);
    cout<<endl<<endl<<"Deque after erase: "<<endl;
    for(int i=0; i<dq.size(); i++)
    {
        cout<<dq[i]<<" ";
    }
    return 0;
}
