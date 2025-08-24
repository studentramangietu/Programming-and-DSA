#include<stdio.h>
void greet(){
    printf("good morning\n");   /// external function ///
    printf("how are you??\n");  /// we can make unlkimted functions like this//
    printf("nice to meet ya\n");

    return;
}
int main(){     ////code starts from main and it comes only one time////
    greet();    ///callimg a fucntion///
    void lola(); /// aka fuction prototype if we apply void() indentation or position doesnt matter! ///
    lola();  
    return 0;   /// ccode ends here/// /// return zero or nothing ///

}
void lola(){
    printf("jai lolu baba ki!!>>");
}