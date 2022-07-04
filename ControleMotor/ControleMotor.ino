#include "Arduino.h"
#include "BasicLinearAlgebra.h"

Matrix<4, 4> A;
Matrix<4, 1> B;
Matrix<4, 4> C;
Matrix<4, 1> D;

void setupMatrizesDeEstado(float J, float b, float k, float R, float L)
{
  A = {0, 1, 0, 0, -b / J, k / J, 0, -k / L, -R / L};
  B = {0, 0, 1 / L};
  C = {1, 0, 0, 0, 1, 0, 0, 0, 1};
  D = Zeros<3, 1>();
}

void setup() 
{
}

void loop() 
{
}
