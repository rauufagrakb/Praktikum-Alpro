#include <iostream>
#include <fstream>
#include "input.h"
#include "proses.h"
#include "output.h"

int main() {
  	Menu input;
    input.inputData();

  	Proses proses;
    proses.getData();
    proses.hitung();

 	Output output;
	output.getData();
  	ofstream outfile;
  	outfile.open("pesanan.txt");
  	outfile <<output;
  	outfile.close();
  	cout<<output; 

  return 0;
}
