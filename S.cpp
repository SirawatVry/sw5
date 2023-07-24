#include <iostream>
#include <string>
using namespace std;
int main()
{	
	float score;
	cout << "Input C++ score :";
	cin  >> score;
	cout << "You "<<((score>=50)? "Pass":"Fail") << " with score " << score << ";" << endl;
	return(0);
}