#include <iostream>
using namespace std;

int add() {
int op1;
int op2;
int ans;
cout << "enter the value of the first operand:" << endl;
cin >> op1;
cout << "enter the value of the second operand:" << endl;
cin >> op2;
ans = op1 + op2;
cout << ans << " is the result" << endl;
return ans;
}


int subtract() {
int op1;
int op2;
int ans;
cout << "enter the value of the first operand:" << endl;
cin >> op1;
cout << "enter the value of the second operand:" << endl;
cin >> op2;
ans = op1 - op2;
cout << ans << " is the result" << endl;
return ans;
}


int divide() {
int op1;
int op2;
int ans;
cout << "enter the value of the first operand:" << endl;
cin >> op1;
cout << "enter the value of the second operand:" << endl;
cin >> op2;
ans = op1 / op2;
cout << ans << " is the result" << endl;
return ans;
}

int multiply() {
int op1;
int op2;
int ans;
cout << "enter the value of the first operand:" << endl;
cin >> op1;
cout << "enter the value of the second operand:" << endl;
cin >> op2;
ans = op1 * op2;
cout << ans << " is the result" << endl;
return ans;
}
int main() {
int e;
char op;
cout << "what operation would you like to perform? options: * / - +" << endl; 
cin >> op;
if (op == '*'){
multiply();

}else if (op == '/') {
divide();

}else if (op == '-') {
subtract();

}else if (op == '+'){
add();
}
return e;
}
