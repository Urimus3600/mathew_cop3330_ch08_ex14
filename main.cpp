#include "std_lib_facilities.h"

/*
 * Yes we can declare a variable passed by value as const because it can still be prevented from changing within
 * the function even if it will not be changed in the place it was originally called. Thus, within this new
 * function the value will not be changed and if it is changed it will cause an error or the compiler will catch
 * it. This is useful to prevent errors through the machine instead of by ourselves. The machine won't make
 * mistakes but we can. So by preventing the value from changing when it shouldn't by definition, we can prevent
 * our own human error and narrow the places to check for errors. It is not used often as we don't often care to
 * put in the extra title and because many functions are simple enough where there is little chance of an
 * accidental reassignment. Furthermore, as a large part of Object-Oriented Programming is reuse, users along the
 * line may want to alter the value within the function and could be frustrated by our initial method parameters.
 * So, it might be best to remove the const before publishing the code.
 *
 * In the following code I have many functions, some that may work and others that won't. To test each on I left
 * only one uncommented at a time and compared the outcome.
 */

void function1(int i);
void function2(const int i);
void function3(int i);
void function4(const int i);
void function5(int i);
void function6(const int i);


int main() {
    int i = 5;
    //function1(i);
    //function2(i);
    //function3(i);
    //function4(i);
    //function5(i);
    //function6(i);
    cout << i;
    //none of the functions change the value of i
    return 0;
}

//void function1(int i){
//    for(int j = 0; j<i; i++)
//        cout << j << endl;
//    //causes endless list of 0's and run time error because I habitually increased i instead of j
//}
//
//void function2(const int i){
//    for(int j = 0; j<i; i++)
//        cout << j << endl;
//    //compiler catches that I attempted to change i and does not allow me to
//}
//
//void function3(int i){
//    for(int j = 0; j<i; j++)
//        cout << j << endl;
//    //works as intended
//}
//
//void function4(const int i){
//    for(int j = 0; j<i; j++)
//        cout << j << endl;
//    //works exactly as 3 does, thus if correct the const doesn't matter
//}
//
//void function5(int i){
//    for(int j = 0;i>j; i--)
//        cout << 5-i << endl;
//    //This time i is purposefully supposed to change, output is as intended
//}
//
//void function6(const int i){
//    for(int j = 0;i<j; i--)
//        cout << j << endl;
//    //this time, despite the change in i being purposeful, yet the function cannot run with const,
//    //thus it must be considered carefully whether a value needs to be changed or not
//}
