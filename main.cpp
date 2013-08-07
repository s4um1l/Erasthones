#include <iostream>
#include <cmath>
#include <stdio.h>
#include <string.h>

using namespace std;


void runSieve(long long  upperBound,long long lowerBound) {
     // long upperBoundSquareRoot = (long long )sqrt((long double)upperBound);
    file fp;
    fp.open()
      bool *isComposite = new bool[upperBound + 1];
      memset(isComposite, 0, sizeof(bool) * (upperBound + 1));
      long long q;
      for (long long m = 2; m*m <= upperBound; m++) {
            if (!isComposite[m]) {
                    if (m>=lowerBound)
                  cout << m <<endl;
                  for (long long k = m * m; k <= upperBound; k += m)
                        isComposite[k] = true;
            }
            q=m;
      }
      q=q+1;
      long long newBound=((q>lowerBound)?q:lowerBound);

      for (long long  m = newBound; m <= upperBound; m++)
            if (!isComposite[m])
                  cout << m << endl;
      delete [] isComposite;
}
int main()
{
       int testcase;
    cin>>testcase;
     long long *first=new long long[testcase];
    long long *second=new long long[testcase];
    for (int i=0;i<testcase;i++){

    cin>>first[i];
    cin>>second[i];


    }
       for (int i=0;i<testcase;i++){
   runSieve(second[i],first[i]);
    cout<<endl;


    }

    return 0;
}
