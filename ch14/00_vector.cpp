#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int arr[10];
	vector<int> v; //v��� ������ int������ �迭 ���� :: �ڵ����� �޸� �Ҵ�ȴ�

	//for (int i = v.begin(); i < v.end(); i++)
	for (int i = 0; i < 20; i++)
	{
		v.push_back(i + 1);
		/*cout << "v[" << i << "] = " << v[i];
		printf("v[%d] = %d\n\n", i, v[i]);*/
	}

	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);

	vector<int>::iterator iter;
	for (iter = v1.begin(); iter != v1.end(); iter++)
	{
		cout << *iter << endl;
	}

	//������޵� ����!
	vector<string>::iterator iter_s;	//������������ ã�ư���
	vector<string> s;
	s.push_back("tiger");
	s.push_back("lion");
	s.push_back("elephant");
	s.push_back("giraffe");
	s.push_back("cow");

	for (iter_s = s.begin(); iter_s != s.end(); iter_s++)
	{
		if (*iter_s == "lion")
		{
			/*s.erase(iter_s);*/
			cout << "����" << endl;
		break;
		}

	}

	for (iter_s = s.begin(); iter_s != s.end(); iter_s++)
	{

		cout << *iter_s << endl;
	}



	return 0;
}