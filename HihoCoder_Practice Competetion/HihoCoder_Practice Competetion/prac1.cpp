//Playfair密码表

//1. 随机选择一个只包含大写字母的单词S作为密钥。  

//2. 将S中的所有字母J替换为字母I。

//3. 将S中的字母依次填写进一个5x5的矩阵，按照从上到下、从左到右的顺序填充格子。填充过程中略过已经在密码表中的字母。

//4. 将'A' - 'I', 'K' - 'Z'(除去J之外的所有大写字母)中没有出现在密码表中的大写字母按照字母表顺序填入矩阵剩余的格子中。

#include <iostream>
#include <string>
using namespace std;

int main(){
	
	
	char matrix[5][5];
	cout << "please enter a word";
	char pw[255];
	cin >> pw;
	char s ;

	for (int i = 0; i < sizeof(pw); i++) {
		s = pw[i];
		if (s == 'J') {
			pw[i] = 'I';
		}
	}
	//输入字母数据
	int k = 0; 
	char ch = 'A';
	for(int i = 0;i<5; i++)
		for (int j = 0; j < 5; j++) {
			if (k < sizeof(pw))
				matrix[j][i] = pw[k++];
			else {
				char c = Judge(ch,pw);
				matrix[j][i] = c;
			}
		}
	//输出
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << matrix[i][j];
		}
		cout << endl;
	}
	
	return 1;
}

char Judge(char ch,char* pw) {
	for (int m = 0; m < sizeof(pw); m++)
	{
		if (pw[m] == ch || ch=='J') {
			ch = char(ch + 1);
			return Judge(ch, pw);
		}
	}
	return ch;
}




















