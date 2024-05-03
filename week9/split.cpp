//split2.cpp
#include <vector>
#include <algorithm> // find_if()
#include <cctype>	 //isspace
#include <string>
#include <iostream>

using namespace std;

//�μ��� ������ ���� true, �׷��� ���� ���� false;
bool space(char c) {
	return isspace(c);
}

bool not_space(char c) {
	return !isspace(c);
}

vector<string> split(const string& str) {
	typedef string::const_iterator iter;
	iter i = str.begin();
	vector<string> ret;

	//for(iter i = str.begin(); i != str.end(); i++ ) �� �����
	while (i != str.end()) {

		//���� ������ ����
		//���� i ��ġ���� ù ��° �پ�� �ƴ� ���� ã��
		i = find_if(i, str.end(), not_space);

		//���� �ܾ��� ���� ã��
		//while �ݺ��� �� �׻� ���ο� �ݺ��� j�� ����
		//���� i ��ġ���� ù ��° �پ�� ã��
		iter j = find_if(i, str.end(), space);
		//[i, j] ������ ���ڸ� ����
		if (i != str.end())
			ret.push_back(string(i, j)); //��Ʈ�� i���� j

		//i �ݺ��� ��ġ�� j�ݺ��ڿ� ��ġ�� ���� (i���� j ���� ���������Ƿ� j���� ����)
		i = j;
	}
	return ret;
}

/*
int main() {
	string s;

	//���ڿ��� �� �྿ �Է¹޾� ����
	while (getline(cin, s)) {
		vector<string> v = split(s);

		//���� v�� ������ �ܾ ���� ���
		for (vector<string>::size_type i = 0; i != v.size(); ++i)
			cout << v[i] << endl;
	}


	return 0;
} */