#include<bits/stdc++.h> 
  
 
using namespace std;
#define ll long long int
 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
	while(t--)
	{
	   string s;
       cin>>s;
       int n=s.length();
       int counter=0;

       for (int i = 0; i < n; i++)  
       {
           int prev=0;
        for (int len = 1; len <= n - i; len++) 
        {
            string dummy=s.substr(i, len);

            for(int j=len-1;j<len;j++)
            {
                char x=dummy[j];
                char ch=toupper(x);
                if(ch=='A' || ch=='E' || ch=='I' || 
                ch=='O' || ch=='U')
                {
                    prev++;
                }
                counter+=prev;
            }
        }
       }  

       cout<<counter<<endl;    
	    
	}
	
	
}	