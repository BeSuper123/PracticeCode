    int num1 = 1;


    // prints the original value of num1
    printf("Original Value: %d", num1);

    // reassigns the value of num1 to what is returned in the passByValue method
    num1 = passByValue(num1);

    // prints the new value of num1
    printf("\nNew Value: %d", num1);

    return 0;