#include  <iostream>
#include <thread>
#include <fstream>
#include <vector>
#include <map>
#include <string>
using namespace std;
class customer {
    string brand;
    string MSISDN;
    string MNC;
    int outgoingInternal = 0;
    int incomingInternal = 0;
    int outgoingExternal = 0;
    int incomingExternal = 0;
    int outSMSInternal = 0;
    int inSMSInternal = 0;
    int outSMSExternal = 0;
    int inSMSExternal = 0;
    int mbDownload = 0;
    int mbUpload = 0;
};
//if calltype=gprs(download,upload)

int main() {//doubts  
    string line="23435|Jio|"

}