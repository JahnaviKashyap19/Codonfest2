// largest and kth largest in an array
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,k;
	cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cin>>k;
    sort(ar.begin(),ar.end());
    cout<<ar.back()<<endl<<ar[n-k];
	
	return 0;
}