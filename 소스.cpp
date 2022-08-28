//전역변수 : 전체 파일에 선언된 변수
//지역변수 : 함수 안에서 선언된 변수. 지역변수는 전역변수보다 우선된다.
//지역변수가 선언되었을 때 전역변수를 불러오기 위해서는, 변수 앞에 ::를 붙여준다.

#include <iostream>
int val = 100;
using namespace std;

int main()
{
	int val = 20;
	cout << val << " " << ::val;
	return 0;
}