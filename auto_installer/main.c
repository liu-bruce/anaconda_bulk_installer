#include <stdlib.h>
#include <stdio.h>
#include "functions.h"

void main()
{
  // full update
  system("conda update --all -y");
  // java install
  system("conda install -c cyclus java-jdk -y");
  //gcc install
  system("conda install -c conda-forge m2w64-gcc -y");
  //git install
  system("conda install -c anaconda git -y ");


}
