#include <iostream>
//#include "Test.h"
#include <time.h>
using namespace std;

int main(){
    time_t timer;
    cout << "Tiempo:" << time(&timer)<<endl;
    //Test* test = new Test();
    //test->testGeneral();

	return 0;
}
