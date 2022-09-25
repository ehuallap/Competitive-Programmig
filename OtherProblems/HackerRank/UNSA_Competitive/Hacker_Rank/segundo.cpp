// @author      : jinnbit           

#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define ll long long
#define ld long double
#define endl "\n"
#define PI 3.1415926535897932384626

const ll inf = (ll) 1e12;
//cin.ignore();
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll len, cam;
	string str;
	cin>>len>>cam;
	cin>>str;

	ll need=0;
	int nueves=0;
	for(int i=0;i<len/2;i++){
		if(str[i]!=str[len-i-1]){
			need++;
			if(str[i]=='9'||str[len-i-1]=='9'){
				nueves++;
			}else{
				nueves+=2;
			}
		}
	}
	if(need>cam){
		cout<<"-1"<<endl;
	}else{
		for(int i=0;i<len/2;i++){
			if(str[i]==str[len-i-1]){
				if(str[i]!='9'&&cam-2>=need){
					str[i]='9';
					str[len-i-1]='9';
					cam-=2;
				}
			}else{
				if(str[i]!='9'){//[]...
					if(str[len-1-i]=='9'){
						str[i]='9';
						cam--;
						need--;
					}else{
						if(cam-2>=need-1){
							str[i]='9';
							str[len-i-1]='9';
							cam-=2;
							need--;
						}else{
							char a=str[i],b=str[len-i-1];
							str[i]=max(a,b);
							str[len-i-1]=max(a,b);
							cam--;
							need--;
						}
					}
				}else{//9...[]
					if(str[len-1-i]!='9'){
						str[len-i-1]='9';
						cam--;
						need--;
					}
				}
			}
		}
		for(int i=0;i<len/2&&cam>=2;i++){
			if(str[i]!='9'){
				str[i]='9';
				str[len-1-i]='9';
				cam-=2;
			}
		}
		if(len%2==1&&cam>=1) str[len/2]='9';
		cout<<str<<endl;
	}



	return 0;
}



