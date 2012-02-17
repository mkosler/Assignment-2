#include <iomanip>
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void writeNumsToFile(int sz, string fileName, string output_style)
 {
	 ofstream nums_out (fileName.c_str());
	 
	 if(output_style == "rand")
	 {
		  nums_out << sz << '\n';
		 for(int i = 0; i < sz; i++)
		 {
			 int rand_inty = rand() % sz;

			 nums_out << rand_inty << '\n';

		 }
	 }


	 if(output_style == "inc")
	 {
		 nums_out << sz << '\n'; 
		 for(int i = 0; i < sz; i++)
		 {
			nums_out << i << '\n';

		 }
	 }

	 if(output_style == "dec")
	 {
		 nums_out << sz << '\n';
		 for(int i = sz; i > 0 ; i--)
		 {
			 nums_out << i << '\n';

		 }
	 }


 }

int main()
{
	srand(time(NULL));

	cout << "Please input the size of the array to be sorted:\n";
	int sz = 0;
	cin >> sz;
	cout << "Please input the filename you wish to save this as:\n";
	string fname;
	cin >> fname;
	cout << "Please input the number generation type you wish to be used to generate your array (inc, dec, rand):\n";
	string output;
	cin >> output;
	cout << "Building file " << fname << endl;
	writeNumsToFile(sz, fname, output);
}
