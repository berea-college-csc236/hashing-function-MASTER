#include <climits> // for INT_MAX
#include <iostream>
#include <string>
using namespace std;

long int myhash(string myparstring) {
    long unsigned int rtnVal = 3253;
    long unsigned int mysize = myparstring.length();
    //cout << myparstring.size();
    for (int p = 0; p < mysize; p++) {
        rtnVal = (rtnVal * 28277) % INT_MAX;
        rtnVal = (rtnVal + myparstring[p] * 2749) % INT_MAX;
        cout << "rtnVal: " << rtnVal << endl;
    }
    return rtnVal;
}

int main() {
    string mystring;
    cout << "Please enter a string without quotes: ";
    cin >> mystring;
    cout << "Here is your hash: " << endl;
    cout << myhash(mystring) << endl;
    cout << "\nRun a few times, being sure to look at the code!\n" << endl;
    return 0;
}