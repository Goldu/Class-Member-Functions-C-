#include <iostream>
using namespace std;
class calculator{
   public:
      int operend1;         // operend 1
      int operend2;        // operend 2
         

      // Member functions declaration
      int getresult_add(void);
      int getresult_subtraction(void);
      int getresult_multiplication(void);
      void setoperend1( int operend1 );
      void setoperend2( int operend2 );
};

// Member functions definitions
void calculator::setoperend1( int o1 ) {
   operend1 = o1;
}
void calculator::setoperend2( int o2 ) {
   operend2 = o2;
}
int calculator::getresult_add(void) {
   return (operend1 + operend2);
}

int calculator::getresult_subtraction(void) {
   return (operend1 - operend2);
}
int calculator::getresult_multiplication(void) {
   return (operend1 * operend2);
}
// Main function for the program
int main() {
   calculator C1;                // Declare C1 of type Calculator
   C1.setoperend1(15);
   C1.setoperend2(10);
   int result1=0;
      int result2=0;
      int result3=0;
   result1=C1.getresult_add();
   result2=C1.getresult_subtraction();
   result3=C1.getresult_multiplication();
   cout << "Addtion= : " << result1 <<endl;
   cout << "Subtraction= : " << result2 <<endl;
   cout << "Multiplication= : " << result3 <<endl;
   return 0;
}
