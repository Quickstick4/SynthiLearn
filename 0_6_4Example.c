#include <stdio.h>

//Note differences with C++ (I will be doing this as I go along to learn)
// C only needs a single header file to work. C++ would need iostream and istream and ostream
//no wordspace so no std:: to declare function calls. We just call the function printf vs 
// std::cout
//Character operators are largely the same, however not there are no '<<' operators in input and output

int main()
{
    int a,b,c;

    printf("\n Please eneter a max 10 number: ");
    //Notes: %d would accept input as a signed int, %10d means only accept the first 10 digits. 
    //& means 'Ad the address of' i.e. a pointer. 
    scanf("%10d", &a);


    printf(" Please enter a second max 10 number: ");
    scanf("%10d", &b);

    c=a+b;

    printf(" %d + %d = %d \n", a,b,c);

    return 0;
}
