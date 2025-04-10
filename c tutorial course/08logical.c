                    /**LOGICAL OPERATOR**
        OPERATOR                           DISCRIPTOIN
        &&                                  IF both operators is non zero then conditionis true

        ||                                  if any of two condition is nonzero then condition is true

        !                                   logical not operator .
                                            it is used to reserve the logical state of its operands.
                                            if condition is true then logical not operator wwil make it false
                                            */
    int main (){
    int a,b;
    a=1;
    b=0;
    printf("a&&b = %d \n", a&&b);
    printf("a||b = %d \n", a||b);
    printf("!b = %d \n",!b); 
    printf("!a = %d \n",!a);
    
    return 0;
}