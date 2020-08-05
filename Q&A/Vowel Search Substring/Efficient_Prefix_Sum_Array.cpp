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

        ll n=s.length();

        vector<ll> arr; 
  
        for (ll i = 0; i < n; i++) 
        { 
  
            if (i == 0)
                arr.push_back(n); 
  
            else
                arr.push_back((n - i) + arr[i - 1] - i); 
        }

        ll sum = 0; 
        for (ll i = 0; i < n; i++)
        {
            char ch=s[i];
            s[i]=toupper(ch);
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I'
            || s[i] == 'O' || s[i] == 'U') 
            sum += arr[i]; 
        }
   
  
        cout<<sum<<endl;    
	    
	}
	
	
}	