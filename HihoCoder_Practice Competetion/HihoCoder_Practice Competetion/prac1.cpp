//Playfair�����

//1. ���ѡ��һ��ֻ������д��ĸ�ĵ���S��Ϊ��Կ��  

//2. ��S�е�������ĸJ�滻Ϊ��ĸI��

//3. ��S�е���ĸ������д��һ��5x5�ľ��󣬰��մ��ϵ��¡������ҵ�˳�������ӡ����������Թ��Ѿ���������е���ĸ��

//4. ��'A' - 'I', 'K' - 'Z'(��ȥJ֮������д�д��ĸ)��û�г�����������еĴ�д��ĸ������ĸ��˳���������ʣ��ĸ����С�

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
	//������ĸ����
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
	//���
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




















