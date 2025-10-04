#include <stdio.h>
// int main(){
//     unsigned long long  factorial =1;

//     int n, i;
//     printf("enter a num:\n");
//     scanf("%d", &n);
//     if (n<0){
//         printf("factorial doesnt exist for negative numbers.");
//     }else{
//         for(i=1; i<=n; i++){
//         factorial= factorial*i;
//     }
//           }
//     printf("factorial: %d\n",factorial );

// }


// #include <stdio.h>

// int main() {
//     int n, i;
//     // Factorial result pedda number avvochu, anduke 'unsigned long long' vaadutunnam
//     unsigned long long factorial = 1;

//     printf("Enter an integer: ");
//     scanf("%d", &n);

//     // Negative numbers ki factorial undadu. Check cheyyali.
//     if (n < 0) {
//         printf("Error! Negative number ki factorial cheyalem masteru.");
//     } else {
//         // Ide asalu magic antha
//         for (i = 1; i <= n; ++i) {
//             factorial = factorial * i; // prati number ni multiply chestunnam
//         }
//         printf("Factorial of %d = %llu", n, factorial);
//     }

//     return 0;
// }

long long int factorial(int n);

int main(){
    int n;
    printf("eneter a postive integer: \n");
    scanf("%d", &n);

    if (n<0 ){
        printf("factorial doesnt exist for negative numbers.\n");
    } else{
        printf("factorial of %d = %lld \n", n, factorial(n));
    }
    return 0;
}

long long int factorial (int n)
{
    if (n>0){
        return n * factorial(n-1);
            }
            else 
    {
        return 1;
    }
}

// #include <stdio.h>

// long long int factorial(int n); // Function ni mundugane declare chestunnam

// int main() {
//     int n;
//     printf("Enter a positive integer: ");
//     scanf("%d", &n);

//     if (n < 0) {
//          printf("Error! Negative numbers ki cheyalem.");
//     } else {
//         printf("Factorial of %d = %lld", n, factorial(n)); // Ikkada aa function ni call chestunnam
//     }

//     return 0;
// }

// long long int factorial(int n) {
//     // Base Case: Ikkada aagali ani cheppe condition. Leka pothe infinite loop aipoddi.
//     if (n > 0) {
//         // Recursive Step: Function malli tanani taane call cheskuntundi
//         return n * factorial(n - 1);
//     } else {
//         return 1; // n=0 ayinappudu 1 return chestundi. Ikkaditho calls aagipothayi.
//     }
// }