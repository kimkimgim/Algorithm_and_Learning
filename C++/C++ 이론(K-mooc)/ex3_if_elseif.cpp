// if - else if 제어문
#include <iostream> 
using namespace std;

int main(){

int nScore; 
char chLevel;

cout << "점수를 입력하세요 : ";
cin >> nScore;
cout << "점수= " << nScore << endl;

if (nScore >= 90) chLevel = 'A';
else if (nScore >= 80) chLevel = 'B';
else if (nScore >= 70) chLevel = 'C';
else if (nScore >= 60) chLevel = 'D';
else chLevel = 'F';

cout << nScore << "는 " << chLevel << "학점입니다\n" ;

return 0;
}