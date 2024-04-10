#include <iostream>
using namespace std;

class subject
{
private:
	char subjectName[20];
	char kod[8];
	int credit;
public:
	subject(const char*, const char*, int k = 3);
	void getDetail();
	friend void changeSubject(subject);
};

subject::subject(const char* sub, const char* kd, int kre)
{
	strcpy_s(subjectName, sub);
	strcpy_s(kod, kd);
	credit = kre;
}

void subject::getDetail()
{
	cout << "\n\nSubject Name : " << subjectName;
	cout << "\nSubject Code : " << kod;
	cout << "\nCredit hours : " << credit;
}

void changeSubject(subject sub)
{
	cout << "\nInsert new subject name: ";
	cin >> sub.subjectName;
	cout << "\nInsert new subject code: ";
	cin >> sub.kod;
	cout << "\n Get new infomration for the subject.";
	sub.getDetail();
}

int main()
{
	subject DS("Data Structure C++", "SCJ2013");
	DS.getDetail();
	changeSubject(DS);
	cout << "\n View the subject information again. ";
	DS.getDetail();
}