#include<iostream>

using namespace std;
string input;
int boy,girl;
signed main(){
	cin>>input;
	for(int i=0;i<input.size();i++){
		if(input[i]=='b'||input[i+1]=='o'||input[i+2]=='y')boy++;
		if(input[i]=='g'||input[i+1]=='i'||input[i+2]=='r'||input[i+3]=='l')girl++;
	}
	cout<<boy<<'\n'<<girl;
}

/// 本题可以视为是拿一个窗口去盖字符串，每次将窗口向右滑动一个字符，如果有符合条件的那么说明肯定此处粘贴过