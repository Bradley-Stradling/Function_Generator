#include <iostream>
#include <iomanip>
using namespace std;

//******************************************************************************
int main()
{

	int flag = 1;
	do {
		string function_Type;
		string header_Name;
		string function_Name;

		cout << "//********************************************************"
			<< "**********************" << endl;
		cout << "                   Welcome to Bradleys C++ Function"
			<< " Generator.";
		cout << endl; 
		cout << endl;

		cout << "Enter the type for the function --<< ";
		cin >> function_Type;

		cout << "Enter the name of the required header --<< ";
		cin >> header_Name;

		cout << "Enter the name of the function to be created --<< ";
		cin >> function_Name;

		cout << endl;

		cout << function_Type << " " << function_Name
			<< "();//function protoype" << endl;
		cout << endl;

		cout << "#include \"" << header_Name << "\"" << endl;
		cout << endl;

		cout << "//********************************************************"
			<< "**********************" << endl;
		cout << endl;

		cout << function_Type << " ";
		cout << function_Name << "()//function definition" << endl;
		cout << "{" << endl;
		cout << endl;
		cout << "}" << endl;
		cout << endl;

		cout << function_Name
			<< "();//function call" << endl;
		cout << endl;
		cout << endl;

	} while (flag == 1);
}
