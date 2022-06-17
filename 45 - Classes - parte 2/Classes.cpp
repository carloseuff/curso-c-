#include <iostream>
#include "objeto01.h"

using namespace std;

int main(){

objeto01 *obj1=new objeto01();
objeto01 *obj2=new objeto01();


obj1->cad('a');
obj2->cad('c');

obj1->impressao();
obj2->impressao();

return 0;    
}
