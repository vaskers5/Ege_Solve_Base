#include <iostream>
#include <vector>
#include <math.h>

using namespace std;
int check(int number){
    int cnt = 2;
    for (int i =3;i<int(number/2);i+=2){
        if (cnt==2 and i>=sqrt(number))
            break;
        if (cnt>6)
            break;
        if (number%i==0)
            cnt++;
    }
    return cnt;
}

int main() {
    vector<int> delims;
    for (int number = 35000000; number<=40000000;number++){
        int delimeters = check(number);
        if (delimeters==5)
            delims.push_back(number);
    }
cout<<delims.size();
    return 0;
}
