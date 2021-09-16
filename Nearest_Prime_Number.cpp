#include<bits/stdc++.h>
using namespace std;

bool Is_Prime(long long x){
	if(x%2==0)return false;
	for(int i=3;i*i<=x;i+=2)
		if(x%i==0)return false;
	return true;
}

int main(){

    int T;
    cin >> T;
    
    for(int t = 0; t < T; t++){
        int n;
	    cin>>n;
	    vector<int> V;
	    V.push_back(2);
	    int primes=0,i=1;
	    while(primes++<n){
		    while(!Is_Prime(++i));
    		    V.push_back(i);
	    }   
	    int result;
	    int L = 2, R = 2;
        for(int j = 1; j < n; j++){
            if(V[j] >= n){
                L = V[j-1];
                R = V[j];
                break;
            }
        }

        if(R - n == 0)
            cout << R << endl;
        else if((n-L) == (R-n))
            cout << L << endl;
        else if((n-L) > (R-n))
            cout << R << endl;
        else
            cout << L << endl;
    }
    


    return 0;
}
