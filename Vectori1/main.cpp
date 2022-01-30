#include<fstream>
#include<iostream>

using namespace std;
ifstream f("vector.in");
ofstream g("vector.out");
int n, v[100],i;
int main()
{
    f>>n;
//    cout<<"n="<<n<<endl;
    for(i=0;i<n;i++)
        f>>v[i];
//    for(i=0;i<n;i++)
//        cout<<v[i]<<" ";
    
    for(i=n-1;i>=0;i--)
        g<<v[i]<<" ";
    f.close();
    g.close();
    return 0;
}
