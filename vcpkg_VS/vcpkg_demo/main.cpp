#include <string>  
#include <json/json.h>
#include <iostream>  
#include <fstream>  
using namespace std;

void writeFileJson();
int main(int argc, char *argv[])
{
	writeFileJson(); //д��json


	system("pause");
	return 0;
}
void writeFileJson()
{
	//���ڵ�  
	Json::Value root;

	//���ڵ�����  
	root["name"] = Json::Value("shuiyixin");
	root["age"] = Json::Value(21);
	root["sex"] = Json::Value("man");

	//�ӽڵ�  
	Json::Value friends;

	//�ӽڵ�����  
	friends["friend_name"] = Json::Value("ZhaoWuxian");
	friends["friend_age"] = Json::Value(21);
	friends["friend_sex"] = Json::Value("man");

	//�ӽڵ�ҵ����ڵ���  
	root["friends"] = Json::Value(friends);

	//������ʽ  
	root["hobby"].append("sing");
	root["hobby"].append("run");
	root["hobby"].append("Tai Chi");

	//ֱ�����  
	//cout << "FastWriter:" << endl;
	//Json::FastWriter fw;
	//cout << fw.write(root) << endl << endl;

	//�������  
	cout << "StyledWriter:" << endl;
	Json::StyledWriter sw;
	cout << sw.write(root) << endl << endl;

	//������ļ�  
	ofstream os;
	os.open("demo.json", std::ios::out | std::ios::app);
	if (!os.is_open())
		cout << "error��can not find or create the file which named \" demo.json\"." << endl;
	os << sw.write(root);
	os.close();

}