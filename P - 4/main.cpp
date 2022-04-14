#include <iostream>
#include <fstream>
#include "input.h"
#include "proses.h"
#include "output.h"

using namespace std;

int main() {
  	Input input;
  	input.cetak();
  	input.toFile();

  	Proses proses;
  	proses.getData();
  	proses.proses();
  	proses.toFile();
  	proses.toPengeluaran();
  
  	outPut keluar;
  	keluar.getData();
  	keluar.getData2();
  	keluar.dataOut();
  
  	return 0;
}
