#include <iostream>
#include <string>

using namespace std;

int main()
{
    string strOne,strTwo;
    cin>>strOne>>strTwo;
    int sum=0;
    int length=strOne.length()>strTwo.length() ? strOne.length():strTwo.length();

    for (int idx=0; idx<length;idx++){
        int oneI,twoI;

        
        oneI=idx<strOne.length()? strOne[idx]:1;
        
        if (idx<strTwo.length()){
            twoI=strTwo[idx];
        }else{
            twoI=1;
        }

        sum+=oneI*twoI;
    }


    cout<<sum<<endl;
}