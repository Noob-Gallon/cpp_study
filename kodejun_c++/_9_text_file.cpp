#include <iostream> // console input/output
#include <fstream> // file input/output
#include <string>

using namespace std;

// 프로그래밍에서는 Data의 흐름을 stream이라고 한다.

int main(void)
{
	// Q. 입력할 때 개행 문자를 어떻게 없앨 수 있는가?



	//ofstream outFile;
	//outFile.open("numbers.txt");

	//int input_num;
	//
	//while (true) {

	//	cin >> input_num;

	//	if (input_num <= 0) {
	//		break;
	//	}

	//	outFile << input_num << endl; // endl을 해줘야 개행이 된다.
	//}
	//outFile.close();



	ifstream inFile;
	inFile.open("numbers.txt");

	if (inFile.is_open() == false) {
		cout << "Unable to open" << endl;
		return -1;
	}

	int value;
	int sum(0);

	while (true) {

		if (inFile.eof()) {
			break;
		}

		inFile >> value;
		sum += value;
	}

	if (inFile.eof() == true) {
		cout << "Sum is : " << sum << endl;
		inFile.close();
		return 0;
	}
	else if (inFile.fail() == true) {
		cout << "Failure,,, file read" << endl;
		inFile.close();
		return -1;
	}
	
	inFile.close();
	return -1;
	
	// iostream의 cin.getline()
	// cin.getline(char* str, streamsize n, char dlim);
	// => str은 입력받을 char 배열의 주소(배열의 이름)
	// streamsize n은 문자열의 사이즈. Null을 고려(자동으로 \0을 채움)
	// 즉, n-1개의 문자 개수만큼 읽어오고, \0을 넣어서 str에 저장.
	// dlim을 지정하지 않으면 엔터('/n')에서 종료함.

	// string 라이브러리의 getline()
	// 최대 문자 수를 입력하지 않아도 된다!
	// getline(iostream&, string str);
	// getline(iostream&, string str, char dlim);
	// => (입력스트림 오브젝트, 문자열을 저장할 string 객체, 종결 문자); 
	// ex) getline(cin, str);

	// getline()함수를 사용할 때 주의할 점.
	
	/*
	 
	int n;
	string str;
	cin >> n;
	getline(cin, str);

	*/
	// => 이와 같은 상황은 n을 입력받은 후, 엔터가 남아있어
	// getline이 실행되지 않고 넘어간다. 이를 해결하기 위해 cin.ignore()
	// 라는 함수를 사용한다.

	// cin은 표준 입력 버퍼에서 개행 문자를 제외한 값을 가져온다.
	// 따라서 공백을 포함해서 입력을 받으려면 getline()을 이용한다.
	// 
	// cin.get()은 표준 입력 버퍼에서 문자를 하나만 가져온다.
	// 문자 하나만 입력이 가능하며, 공백과 개행도 입력으로 포함한다.
	/*
	int n;
	string str;
	cin >> n;
	cin.ignore();
	getline(cin, str);
	cout << str << "\n\n\n";
	*/
	// str = cin.get(); cin.get();으로 입력받으면 한 글자만 입력된다.
	// cin은 표준 입력 버퍼에 개행 문자('/n')를 남기므로,
	// cin.ignore();를 이용해 표준 입력 버퍼에 남은 개행 문자를
	// 제거해야 getline()으로 원하는 값을 올바르게 받을 수 있다.
	



	// -------------------------------------------------------- //
	/*
	ifstream inFile;

	inFile.open("yyy.txt");

	if (not (inFile.is_open())) {
		cout << "Unable to open the file" << endl;
		return -1; // return 값이 중요하진 않지만, 의미를 부여
	}
	
	char input_name[50];
	unsigned short input_age;
	double input_weight;

	inFile.getline(input_name, 50);
	inFile >> input_age;
	inFile >> input_weight;

	cout << input_name << "(은)는 " << input_age << "살 이고, " <<
		input_weight << "kg 이다." << endl;
	*/
	// -------------------------------------------------------- //



	/*
	ofstream outFile;

	outFile.open("yyy.txt"); // C/C++은 반드시 " " 사용.

	// 사람의 이름, 나이, 체중을 기록한다.
	cout << "Name: ";
	string name; 

	getline(cin, name);

	outFile << name << endl;

	cout << "Age: ";
	unsigned short age;
	cin >> age;
	outFile << age << endl;

	cout << "Weight: ";
	double weight;
	cin >> weight;
	outFile << weight << endl;

	outFile.close();
	*/

	/*
	파일의 종류
	1) binary file : HWP 등... (mp3 등)
	2) text file : notepad 등... (cpp 등)

	1. text file에 쓰기와 읽기

	2. 헤더 : fstream

	3. 파일 쓰기
	-ofstream : output fiel stream, 기록전용
	=> 사용법 
	-ofstream outFile; => File에 연결된다.
	-outFile.open('test.txt'); => 책처럼 File을 연다.
	-outFile.close(); => 다 썼으므로, File을 닫는다.

	4. 파일 읽기
	-ifstream : input file stream, 읽기전용
	=> 사용법
	-ifstream inFile;
	-inFile.open('test.txt');
	-inFile.is_open() : bool // 항상 file이 제대로 열렸는지 확인해야함.
							 // 따라서 is_open()으로 확인 필요.
	-inFile.good() : bool	 // 아직도 읽을 내용이 남았는지 확인
	-inFile.eof() : bool, 파일 끝에 도달?
	-inFile.fail() : bool, 읽기 실패	
	-inFile.close();
	*/

	return 0;
}