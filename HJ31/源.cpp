//对字符串中的所有单词进行倒排。
//
//说明：
//
//1、构成单词的字符只有26个大写或小写英文字母；
//
//2、非构成单词的字符均视为单词间隔符；
//
//3、要求倒排后的单词间隔符以一个空格表示；如果原字符串中相邻单词间有多个间隔符时，
//倒排转换后也只允许出现一个空格间隔符；
//
//4、每个单词最长20个字母；

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cctype>
#include<sstream>
#include<stack>
using namespace std;

void create_new(string str)
{
	int len = str.size();
	for (int i = 0; i < len; i++) {
		if (!isalpha(str[i])){
			str[i] = ' ';
		}
	}
	stringstream ss(str);//使用字符流处理字符串非常方便
	string word;
	stack<string> s_stack;
	while (ss>>word) {
		s_stack.push(word);
	}

	while (!s_stack.empty()) {
		cout << s_stack.top() << ' ';
		s_stack.pop();
	}

}

int main() 
{
	string str;
	while (getline(cin,str)) {
		create_new(str);
	}

	return 0;
}
