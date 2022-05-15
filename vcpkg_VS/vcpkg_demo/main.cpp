#include <string>  
#include <json/json.h>
#include <iostream>  
#include <fstream>  
using namespace std;

void writeFileJson();
int main(int argc, char *argv[])
{
	writeFileJson(); //写入json


	system("pause");
	return 0;
}
void writeFileJson()
{
	//根节点  
	Json::Value root;

	//根节点属性  
	root["name"] = Json::Value("shuiyixin");
	root["age"] = Json::Value(21);
	root["sex"] = Json::Value("man");

	//子节点  
	Json::Value friends;

	//子节点属性  
	friends["friend_name"] = Json::Value("ZhaoWuxian");
	friends["friend_age"] = Json::Value(21);
	friends["friend_sex"] = Json::Value("man");

	//子节点挂到根节点上  
	root["friends"] = Json::Value(friends);

	//数组形式  
	root["hobby"].append("sing");
	root["hobby"].append("run");
	root["hobby"].append("Tai Chi");

	//直接输出  
	//cout << "FastWriter:" << endl;
	//Json::FastWriter fw;
	//cout << fw.write(root) << endl << endl;

	//缩进输出  
	cout << "StyledWriter:" << endl;
	Json::StyledWriter sw;
	cout << sw.write(root) << endl << endl;

	//输出到文件  
	ofstream os;
	os.open("demo.json", std::ios::out | std::ios::app);
	if (!os.is_open())
		cout << "error：can not find or create the file which named \" demo.json\"." << endl;
	os << sw.write(root);
	os.close();

}