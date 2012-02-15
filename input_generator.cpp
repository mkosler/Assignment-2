#include<iomanip>
#include <iostream>
#include<fstream>

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

