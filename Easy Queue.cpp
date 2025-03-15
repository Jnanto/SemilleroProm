

#include <iostream>

int main()
{
    
    int n;
    cin>>n;
    queue <int> q;
    for (int i =0; i <n; ++i)
    {
        int x;
        cin>>x;

        if(x ==1)
        {
            int v;
            cin>>v;
            q.push(v);
        }
        if(x==2)
        {
            q.pop();

        }
        if(x==3)
        {
            if(!q.empty())
            {
                cout<<q.front()<<endl;

            }
            else
            {
                cout<<"Empty !"<<endl;
            }
        }
    }
    
}