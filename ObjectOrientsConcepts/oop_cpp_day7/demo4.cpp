#include<iostream>
using namespace std;

int main()
{
    int n,d;
    try //block
    {
        cout<<"\n enter n and d";
        cin>>n>>d;
        if(d==0)
            throw "error";  //"throw statement" is a jump statement
        int res=n/d;
        cout<<"\n res="<<res;
    }
    catch(int e)  //block
    {
        cout<<"\n divid by zero ...  (int)";
    }
    catch(char c)
    {
        cout<<"\n divid by zero ...  (char)";
    }
    catch(...)//generic catch block 
    {
        cout<<"\n divid by zero ...  (....)";
    }
    
    cout<<"\n";
    return 0;
}