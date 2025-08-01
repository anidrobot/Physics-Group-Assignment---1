#include<stdio.h>
#include<math.h>
#define PI 3.1416
float wavelength_calculator(int m, float d, float theta)
{
  d = d * 1e-6 ;
  theta = theta * (PI/180);

  float lambda_m = (d * sin(theta)/m);
  float lambda_nm = lambda_m * 1e9;

  return lambda_nm;
}


int main()
{
  int m;
  float d,theta,result;
  char* color;

  printf("Enter The Value of Order \"m\":\n");
  scanf("%d", &m);

  printf("Enter Distance \"d\" (in um):\n");
  scanf("%f",&d);

  printf("Enter The Value of Angle \"theta\" (in degrees):\n");
  scanf("%f", &theta);


  result = wavelength_calculator(m, d, theta);
  printf("Wavelength is : %.2f nm \n",result);


 
