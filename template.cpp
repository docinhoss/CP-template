#include <bits/stdc++.h>

using namespace std;

#define trav(a,x) for(auto& a : x)
#define rep(i,a,b) for(int i = a; i < (b); ++i)
#define sz(v) ((int)((v).size()))
#define all(x) begin(x), end(x)

#define LOWER(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define UP(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
#define RDUPLICATE(s) s.erase(unique(s.begin(), s.end()), s.end())

#define MIN(s) *min_element(s.begin(), s.end()); //Min element in vector
#define MAX(s) *max_element(s.begin(), s.end()); //Max element in vector
#define ARR_MIN(s,n,o) *min_element(s, s+n+o); //Min element in array
#define ARR_MAX(s,n,o) *max_element(s, s+n+o); //Max element in array

typedef long long ll;


const int MAX = 100;
bool valid(int i, int j){return 1;}

ll arr[100001];

//(ll *)m
void print_matrix(ll *m, int r, int c){
	for(ll i = 0; i < r; i++)
		for(ll j = 0; j < c; j++)
			cout << *((m+i*c)+j) << " \n"[j == c-1];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
	
	
    return 0;
}
