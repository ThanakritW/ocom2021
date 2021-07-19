#include<stdio.h>
int main() 
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a <= 0 || b <= 0 || c <= 0)
    {
      printf("%.4lf, %.4lf and %.4lf are NOT sides of triangle.",a,b,c);
    }
    else
    {
      double maxSide = a;
      double other1 = b, other2=c;
      if(b>maxSide)
      {
        maxSide = b;
        other1=a;
        other2=c;
      }
      if(c > maxSide)
      {
        maxSide = c;
        other1=a;
        other2=b;
      }
      if(maxSide >= other1+other2 - 0.00001)
      {
        printf("%.4lf, %.4lf and %.4lf are NOT sides of triangle.",a,b,c);
      }
      else
      {
        double maxSS = maxSide*maxSide;
        double o1s = other1*other1;
        double o2s = other2*other2;
        double error = 0.001;
        if(maxSS >= o1s+o2s - error&& maxSS <= o1s+o2s +error)
          printf("%.4lf, %.4lf and %.4lf are sides of RIGHT triangle.",a,b,c);
        else
          printf("%.4lf, %.4lf and %.4lf are NOT sides of RIGHT triangle, just a TRIANGLE.",a,b,c);
      }
    }
    return 0;
}