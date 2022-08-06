/*
array of object

static array : Person p[10]

array by vector

#include <vector>
=> vector는 SLL과 똑같다.

vector<data_type> vname;
=> < ... > 안에 data_type을 써준다.
ex) vector<int> vname; => templete
ex) vector<Person> vname;

vname.push_back() : 맨 뒤에 추가
vname.front() : 맨 앞에 있는 것 출력
vname.back() : 맨 끝에 있는 것.
vname.pop_back() : 맨 끝에 있는 것을 날린다. return 값이 없음.
vname.empty() : 요소가 있냐 없냐를 본다.
vname.size() : vector의 size를 얻어올 수 있다.

vname.begin() 
=> begin을 하면, vector의 모든 요소를 마치 굴비를 엮듯이
   하나하나 access할 수 있는 sequence를 준다. 이를 iterator 라고 한다.
   vector 안에 들어있는 요소들이 순서가 존재하는데, 이들에 대한 주소를
   준다고 생각하면 된다. iterator는 순서를 맞춰서 vector의 요소들의
   주소를 준다.
   ㅁ->ㅁ->ㅁ->...->ㅁ->end : 각각의 ㅁ에는 요소에 들어갈 수 있는 주소가 존재.
   iterator의 마지막에는 vector가 끝났다는 것을 알리기 위한 특별한 주소 존재.

vname.end()
for (auto p = vname.begin(); p != vname.end(); p++)
{	*p ... }

vname.erase(vname.begin()+i)
=> 지우는 방법

vname.insert(vname.begin()+i, value)
=>지정된 위치 바로 앞에

vname.at(i)
vname[i]
=> 이와 같이 index로도 접근할 수 있다.

range based for-loop
for (auto& k : vname) { ... }

for (auto i : p)
	{
		cout << "age : " << i.age << endl;
	}

	range based for loop.
	auto를 붙이는 이유? i의 type을 자동으로 결정하라는 뜻이다.
	굳이 일일이 써주기 귀찮으니까 자동으로 결정한다.(Person)
	
	range based for loop은 마치 call-by-value처럼 Person을 i로 복사한다.
	이는 memcpy를 하는 것이기 때문에 메모리를 사용해서 시간이 많이 걸리고
	메모리를 차지하게 된다. 이를 해결하려면 auto&를 이용하여 복사를 하지
	않고 for loop을 돌린다.

for (auto& i : p)
	{
		cout << "age : " << i.age << endl;
	}
=> 새로운 이름 i를 붙인다. 
*/